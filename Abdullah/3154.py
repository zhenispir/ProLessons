a = list(map(int, input().split()))
s = 0
for i in range(0, len(a)):
    if a[i] > 0:
        s = s + 1
print(s)
