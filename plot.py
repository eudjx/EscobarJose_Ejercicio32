import os
import numpy as np
import matplotlib.pyplot as plt

plt.figure()
data = np.loadtxt("Ex32.dat")
fig=plt.figure(figsize=(15,10))
plt.subplot(1,2,2)
plt.plot(np.linspace(0, 1, len(data)),data)
plt.subplot(1,2,1)
plt.imshow(data/np.max(data))
plt.colorbar()
plt.savefig("wave")
plt.show()