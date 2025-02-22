a = {20, 10, 40}
b = {20, 40, 60}
i1 = a.intersection(b)  # kyylysu
i2 = a & b
print(i1)
print(i2)
u1 = a.union(b)  # biriktiru
u2 = a | b
print(u1)
print(u2)
d1 = a.difference(b)  # shygaru
d2 = a-b
print(d1)
print(d2)
sd1 = a.symmetric_difference(b)
sd2 = a ^ b
print(sd1)
print(sd2)
'''
print(10 in a)
for element in a:
    print(element)

a.add(50)  #{20, 10, 40, 50}
a.remove(10) #{20, 40, 50}
a.update({1,2})  #{20, 40, 50, 1,2}
x = a.pop()
a.clear()
print(a)
print(x)
'''
