t = int(input())
for i in range(t):
    jauap = "B"
    for j in range(8):
        a = input()
        if a == "RRRRRRRR":
            jauap = "R"
            break
    print(jauap)