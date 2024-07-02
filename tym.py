import matplotlib.pyplot as plt
import matplotlib.animation as animation
import numpy as np
from math import pi, e ,sqrt

fig, ax = plt.subplots()
x = np.linspace(-sqrt(pi), sqrt(pi), 500)
ax.set_xlim(-2, 2)
ax.set_ylim(-1.5, 3)
line, = ax.plot([], [], 'r-')

def init():
    line.set_data([], [])
    return line,

def update(frame):
    y = np.power(x ** 2, 1 / 3) + e / 3 * (pi - x ** 2) ** 0.5 * np.sin(frame * pi * x / 5)
    line.set_data(x, y)
    return line,

ani = animation.FuncAnimation(fig, update, frames=300,
                             init_func=init, blit=True, interval=50, repeat=False)

plt.show()
