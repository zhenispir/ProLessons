x = int(input())
k = int(input())
n = 1
for i in range(1, x+1):
    n = n * i
kk = 1
for i in range(1, k+1):
    kk = kk * i
nk = 1
for i in range(1, x-k+1):
    nk = nk * i

print(n/(kk*nk))
