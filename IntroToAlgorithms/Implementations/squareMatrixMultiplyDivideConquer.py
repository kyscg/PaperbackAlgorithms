import numpy as np


def smmdc(a, b, n):
    c = np.zeros((n, n))

    if n == 1:
        c[0][0] = a[0][0] * b[0][0]
    else:
        """
        c_11 = c[:n//2, :n//2]
        c_12 = c[:n//2, n//2:n]
        c_21 = c[n//2:n, :n//2]
        c_22 = c[n//2:n, n//2:n]
        a_11 = a[:n//2, :n//2]
        a_12 = a[:n//2, n//2:n]
        a_21 = a[n//2:n, :n//2]
        a_22 = a[n//2:n, n//2:n]
        b_11 = b[:n//2, :n//2]
        b_12 = b[:n//2, n//2:n]
        b_21 = b[n//2:n, :n//2]
        b_22 = b[n//2:n, n//2:n]
        c_11 = smmdc(a_11, b_11, n//2) + smmdc(a_12, b_21, n//2)
        c_12 = smmdc(a_11, b_12, n//2) + smmdc(a_12, b_22, n//2)
        c_21 = smmdc(a_21, b_11, n//2) + smmdc(a_22, b_21, n//2)
        c_22 = smmdc(a_21, b_12, n//2) + smmdc(a_22, b_22, n//2)
        """
        c[:n//2, :n//2] = smmdc(a[:n//2, :n//2], b[:n//2, :n//2],
                                n//2) + smmdc(a[:n//2, n//2:n], b[n//2:n, :n//2], n//2)
        c[:n//2, n//2:n] = smmdc(a[:n//2, :n//2], b[:n//2, n//2:n],
                                 n//2) + smmdc(a[:n//2, n//2:n], b[n//2:n, n//2:n], n//2)
        c[n//2:n, :n//2] = smmdc(a[n//2:n, :n//2], b[:n//2, :n//2],
                                 n//2) + smmdc(a[n//2:n, n//2:n], b[n//2:n, :n//2], n//2)
        c[n//2:n, n//2:n] = smmdc(a[n//2:n, :n//2], b[:n//2, n//2:n],
                                  n//2) + smmdc(a[n//2:n, n//2:n], b[n//2:n, n//2:n], n//2)

    return c


n = int(input("Enter the order of the square matrix:"))

a = np.random.rand(n, n)
b = np.random.rand(n, n)

c = smmdc(a, b, n)

if c.all() == (a*b).all():
    print("Correct")
else:
    print(c)
    print(a*b)
    print("Wrong")
