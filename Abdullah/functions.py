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
'''

def audan(a,b):     # argumentter
    area = a*b / 2
    return area     # kurastyru
print(audan(5,6))      # koldanu
