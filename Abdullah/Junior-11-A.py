t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    list_summasy = sum(a)
    jup = any(x % 2 == 0 for x in a)
    tak = any(x % 2 == 1 for x in a)
    if list_summasy % 2 == 1 or jup and tak:
        print("YES")
    else:
        print("NO")