import matplotlib.pyplot as plt
import numpy as np

x = np.arange(0, 4, 0.05)
y = np.sin(x*np.pi)

fig, ax = plt.subplots(figsize=(3,2), constrained_layout=True)
ax.plot(x, y)
ax.set_xlabel('t [s]')
ax.set_ylabel('S [V]')
ax.set_title('Sine wave')
fig.set_facecolor('lightsteelblue')
plt.show()