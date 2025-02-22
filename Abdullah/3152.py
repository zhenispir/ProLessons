a = list(map(int, input().split()))
c = []
for i in range(0, len(a)):
    if a[i] > 0:
        c.append(a[i])
print(len(c))
