import numpy as np
import matplotlib.pyplot as plt
from astropy import constants as const

mn  = const.m_n.cgs.value #g
c  = const.c.cgs.value    #cm s-1
h  = const.h.cgs.value #erg s
pi = np.pi
k  = (mn**4) * (c**5) * pi / (h**3)
G  = const.G.cgs.value  #cm g-1 s-2
rho_c = 6e+17*1e+3*1e-6 #g cm-3
K = 5.3802e+9 #cgs
gamma = 5./3.
M_s = 1.989e+33 #g
e_nuc = 2.8e+14*c**2

def ep(x):
    chi = (x + 2.*(x**3))*np.sqrt(1+x**2) - np.log(x+np.sqrt(1+x**2))
    return k*chi

def P(x):
    phi = (2./3. * (x**3) - x)*np.sqrt(1+x**2) + np.log(x+np.sqrt(1+x**2))
    return k*phi

def step_m(mi,epl,r,dr):
    dmdr = 4*pi*epl*r**2 / c**2
    return mi + dmdr*dr

def step_ep(epl,x,dx):
    dedx = k * 8 * x**2 /(3*np.sqrt(1+x**2))
    return epl + dedx*dx

def step_P(pr,x,dx):
    dPdx = k * 8 * (x**4)/(3 * np.sqrt(1+x**2))
    return pr + dPdx*dx

def var_x(epl,pr,r,m,dr,x):

    dPdr_1 = -G*( epl/c**2 + pr/c**2 )*( m + 4*pi*pr*(r**3)/c**2)
    dPdr_2 = r*(r-2*G*m/c**2)
    #print dPdr_1,dPdr_2,r-2*G*m/c**2
    dPdr = dPdr_1/dPdr_2

    dPdx = k * 8 * (x**4)/(3 * np.sqrt(1+x**2))

    return dPdr*dr/dPdx


def var_r(epl,pr,r,m,dx,x):

    dPdr_1 = -G*( epl/c**2 + pr/c**2 )*( m + 4*pi*pr*(r**3)/c**2)
    dPdr_2 = r*(r-2*G*m/c**2)
    print dPdr_1,dPdr_2,r-2*G*m/c**2
    dPdr = dPdr_1/dPdr_2

    dPdx = k * 8 * (x**4)/(3 * np.sqrt(1+x**2))

    return dPdx*dx/dPdr

def ply_P(x):
    rho = ep(x)/c**2
    return K*rho**gamma

#Array of the e's and x's
jump = 1e-5
aux_x = np.arange(4e-6,2,jump)
aux_e = ep(aux_x)
print aux_e

#Code

d_r = 1e+2 #cm

lst_m,lst_r,lst_ec = np.array([]),np.array([]),np.array([])

for j in np.arange(0.1,13,0.1):
    #Initial conditions
    print j,
    de = 1.+1e-1
    m_i = 0
    e_i = j*1e+36
    x_i = np.mean(aux_x[(aux_e<=(e_i*de)) & (aux_e>=(e_i/de))]) #aprox sol to x_c
    print x_i
    Pr_i = P(x_i)
    Pr_i_aux = ply_P(x_i)
    r_i = 0
    lst_ec = np.append(lst_ec,e_i)


    ms = np.array([m_i])
    xs = np.array([x_i])
    Prs = np.array([Pr_i])
    Prs_aux = np.array([Pr_i_aux])
    rs = np.array([r_i])
    es = np.array([e_i])

    while x_i>=0:
        Pr_i = P(x_i)
        Pr_i_aux = ply_P(x_i)
        m_i = step_m(m_i,e_i,r_i,d_r)
        r_i += d_r
        dx0 = var_x(e_i,Pr_i_aux,r_i,m_i,d_r,x_i)
        x_i += dx0
        e_i = ep(x_i)
        #Pr_i = step_P(Pr_i,x_i,dx0)
        #e_i = step_ep(e_i,x_i,dx0)
        ms = np.append(ms,m_i)
        xs = np.append(xs,x_i)
        Prs = np.append(Prs,Pr_i)
        Prs_aux = np.append(Prs_aux,Pr_i_aux)
        rs = np.append(rs,r_i)
        es = np.append(es,e_i)

    plt.plot(rs*1e-5,Prs,label='P(r)')
    plt.plot(rs*1e-5,Prs_aux,label='Politropo')
    plt.axhline(0,color='k',ls='--')
    plt.xlabel("Radio [km]")
    plt.ylabel(r"Presion [dynes cm$^{-2}$]")
    plt.legend()
    #plt.show()
    plt.gcf().clear()

    lst_m = np.append(lst_m,m_i)
    lst_r = np.append(lst_r,r_i)

max_m = np.where(lst_m == max(lst_m))
print max_m,lst_m[max_m]/M_s,lst_r[max_m]*1e-5,lst_ec[max_m]/e_nuc


plt.figure()
plt.plot(lst_ec/e_nuc,lst_m/M_s)
plt.xlabel(r'$\epsilon_c$ [$\epsilon_{nuc}$] ')
plt.ylabel(r'Masa [$M_\odot$]')
plt.figure()
plt.plot(lst_ec/e_nuc,lst_r*1e-5)
plt.xlabel(r'$\epsilon_c$ [$\epsilon_{nuc}$]')
plt.ylabel(r'Radio [km]')
plt.figure()
plt.plot(lst_r*1e-5,lst_m/M_s)
plt.xlabel(r'Radio [km]')
plt.ylabel(r'Masa [$M_\odot$]')
plt.show()


#values at max M
m_i = 0
e_i = lst_ec[max_m]
x_i = np.mean(aux_x[(aux_e<=(e_i*de)) & (aux_e>=(e_i/de))])
r_i = 0

ms = np.array([m_i])
xs = np.array([x_i])
Prs = np.array([Pr_i])
rs = np.array([r_i])
es = np.array([e_i])

while x_i>0:
    Pr_i = P(x_i)
    m_i = step_m(m_i,e_i,r_i,d_r)
    r_i += d_r
    dx0 = var_x(e_i,Pr_i,r_i,m_i,d_r,x_i)
    x_i += dx0
    e_i = ep(x_i)
    ms = np.append(ms,m_i)
    xs = np.append(xs,x_i)
    Prs = np.append(Prs,Pr_i)
    rs = np.append(rs,r_i)
    es = np.append(es,e_i)

plt.gcf().clear()
plt.plot(rs*1e-5,es/e_nuc,label=r'$\epsilon (r)$')
plt.xlabel("Radio [km]")
plt.ylabel(r'$\epsilon$ [$\epsilon_{nuc}$]')
plt.show()
