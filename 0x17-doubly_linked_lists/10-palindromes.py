#!/usr/bin/python3
p = 0
large = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        p = i * j
        p = str(p)
        if p == p[::-1]:
            p = int(p)
            if (p > large):
                large = p
print (large)
