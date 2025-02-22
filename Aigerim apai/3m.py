'''
4 1 1 2
4 5 6 8

3 2 2 2
3 5 7 9

5 3
5 8
'''

n1,n2,n3 = map(int,input().split())
m1 = list(map(int,input().split()))[:n1]
m2 = list(map(int,input().split()))[:n2]
m3 = list(map(int,input().split()))[:n3]

sm1 = set() #{4,5,6,8}
sm2 = set() #{3, 5, 7, 9}
sm3 = set() # {5,8}

summa=0
for i in m1:
    summa += i
    sm1.add(summa)

summa=0
for i in m2:
    summa += i
    sm2.add(summa)

summa=0
for i in m3:
    summa += i
    sm3.add(summa)

songgy = sm1 & sm2 & sm3
print(max(songgy))  # {3,5} => 5
