x, y = map(int, input().split())

if x > y:
    kishi = y
else:
    kishi = x

for i in range(1, kishi + 1):
    if x%i == 0 and y%i == 0:
        euob = i

print(euob)
