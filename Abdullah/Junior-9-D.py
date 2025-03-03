'''
a = [12,5,4,2,10,3]
minsan = a[0]
for i in range(len(a)):
    if a[i] < minsan:
        minsan=a[i]
print(minsan)
'''
t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    minsan = a[0] 
    for j in range(len(a)):
        if a[j] < minsan:
            minsan=a[j]
    
    result = 0
    for k in range(len(a)):
        result = result + a[k] - minsan
    print(result)