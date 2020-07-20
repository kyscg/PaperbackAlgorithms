import numpy as np


def smmbf(a, b, n):
    c = np.zeros((n, n))
    for i in range(n):
        for j in range(n):
            c[i][j] = 0
            for k in range(n):
                c[i][j] += a[i][k] * b[k][j]

    return c


n = int(input("Enter the order of the square matrix:"))

a = np.random.rand(n, n)
b = np.random.rand(n, n)

c = smmbf(a, b, n)

if c.all() == (a*b).all():
    print("Correct")
else:
    print(c)
    print(a*b)
    print("Wrong")
