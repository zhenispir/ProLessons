t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    aset = set(a)
    if n == 1:
        print("YES")
    elif len(a) == len(aset):
        print("YES")
    else:
        print("NO")