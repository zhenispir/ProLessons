from itertools import combinations

n = int(input())
a = list(map(int,input().split()))
aa = list(combinations(a, 2))

def is_c(san):
    cub = int(round(san**(1/3)))
    return cub ** 3 == san

x=0
for i in range(len(aa)):
    san = aa[i][0] * aa[i][1]
    if is_c(san):
        x+=1
        #print(san)

print(x)
