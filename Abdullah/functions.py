'''
def audan():
    a = int(input())
    b = int(input())
    area = a*b / 2
    return area     # kurastyru
print(audan())      # koldanu

# 18 joldan => 11 jolga
# 12 ainymnaly => 2 ainynamly
# bug 18 joldan => 5 jolga


def audan(a,b):     # argumentter
    area = a*b / 2
    return area     # kurastyru
print(audan(5,6))      # koldanu


def audan(a, b=10):     # argumentter, b = default
    area = a*b / 2
    return area     # kurastyru
print(audan(5,6))      # koldanu
print(audan(5))     # b = 10 autamattyk
'''

# olimpiadada funksiya koldanu
def audan(a,b):
    area  =  a*b // 2
    return area

print(audan(int(input()),int(input())))