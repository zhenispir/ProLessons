a = []
for i in range(5):
    x = list(map(int,input().split()))[:5]
    a.append(x)


for i in range(5):
    for j in range(5):
        if a[i][j] == 1:
            jol=i
            bagan=j
            break

j = abs(jol-2)+abs(bagan-2)
print(j)
