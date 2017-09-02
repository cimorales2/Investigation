import numpy as np
import matplotlib.pyplot as plt

t_dR = 2.0
t_R  = 3.49

tau = lambda nR: t_dR/t_R + 2./(nR * t_R)

n_Rs = np.arange(1,1001,1)
print tau(110)
plt.plot(n_Rs,tau(n_Rs),'.')
plt.show()
