n = int(input())
for i in range(n):
    s = input()
    birsan = int(s[0])
    ekisan = int(s[2])
    if s[1] == '>':
        if birsan > ekisan:
            print(s)
        elif birsan < ekisan:
            print(s[0], '<', s[2], sep='')
        elif birsan == ekisan:
            print(s[0], '=', s[2], sep='')
    elif s[1] == '<':
        if birsan < ekisan:
            print(s)
        elif birsan > ekisan:
            print(s[0], '>', s[2], sep='')
        elif birsan == ekisan:
            print(s[0], '=', s[2], sep='')
    elif s[1] == '=':
        if birsan == ekisan:
            print(s)
        elif birsan > ekisan:
            print(s[0], '>', s[2], sep='')
        elif birsan < ekisan:
            print(s[0], '<', s[2], sep='')
            
            
