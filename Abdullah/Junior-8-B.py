a=int(input())
for i in range(a):
    d=int(input())
    b=input()
    c=input()
    flag=True
    for j in range(d):
        if b[j]==c[j] or (b[j]=='G' and c[j]=='B') or (b[j]=='B' and c[j]=='G'):
            flag=True
        else:
            flag=False
            break
    if flag:
        print("YES")
    else:
        print("NO")