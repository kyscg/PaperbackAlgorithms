def fmcs(a, l, m, h):
    """
    Find the maximum sum in the crossing
    of the array.
    """
    l_s = -1000000
    s = 0
    c_low = 0
    c_high = 0
    for i in range(m, l - 1, -1):
        s += a[i]
        if s > l_s:
            l_s = s
            c_low = i

    r_s = -1000000
    s = 0
    for i in range(m + 1, h + 1):
        s += a[i]
        if s > r_s:
            r_s = s
            c_high = i

    return (l_s + r_s, c_low, c_high)


def fms(a, l, h):
    """
    Find Maximum Subarray (D&C paradigm)
    """
    if l == h:
        return (a[l], l, h)
    else:
        m = (l + h) // 2
        l_s, l_l, l_h = fms(a, l, m)
        r_s, r_l, r_h = fms(a, m + 1, h)
        c_s, c_l, c_h = fmcs(a, l, m, h)

    if l_s >= r_s and l_s >= c_s:
        return l_s, l_l, l_h
    elif r_s >= c_s and r_s >= l_s:
        return r_s, r_l, r_h
    else:
        return c_s, c_l, c_h


n = int(input("Number of elements:"))
print("Enter the elements")
a = []
for i in range(0, n):
    a.append(int(input()))

tot, low, high = fms(a, 0, n - 1)

print("{} {} {}".format(low, high, tot))
