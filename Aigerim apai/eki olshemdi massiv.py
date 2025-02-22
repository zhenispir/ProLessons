a = []
for i in range(5):
    x = list(map(int,input().split()))[:5]
    a.append(x)


for i in range(5):
    for j in range(5):
        print(a[i][j])
