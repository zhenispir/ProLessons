t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    minsan = min(a)
    summa = sum(a)
    result = summa - minsan * n
    print(result)