t = int(input())

#cases = []
for i in range(t):
    n = int(input())
    s1 =input().split()
    s2 =input().split()
    s3 =input().split()
    #cases.append([n,s1,s2,s3])

    soz_sany = {}
    for j in s1:
        if j in soz_sany:
            soz_sany[j] += 1
        else:
            soz_sany[j] = 1
    for j in s2:
        if j in soz_sany:
            soz_sany[j] += 1
        else:
            soz_sany[j] = 1
    for j in s3:
        if j in soz_sany:
            soz_sany[j] += 1
        else:
            soz_sany[j] = 1
    
    ochko1, ochko2, ochko3 = 0, 0, 0
    
    for j in s1:
        if soz_sany[j] == 1:
            ochko1 += 3
        elif soz_sany[j] == 2:
            ochko1 += 1
    for j in s2:
        if soz_sany[j] == 1:
            ochko2 += 3
        elif soz_sany[j] == 2:
            ochko2 += 1
    for j in s3:
        if soz_sany[j] == 1:
            ochko3 += 3
        elif soz_sany[j] == 2:
            ochko3 += 1

    print(ochko1, ochko2, ochko3)