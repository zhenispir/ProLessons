# 11B Functions
"""
def B11():    # creating
    print("Good afternoon, 11B")

B11()    #calling
"""
'''
def area_rectangle(a, b):
    area = a * b
    return area

areas = []

for i in range(5):
    areas.append(area_rectangle(i, i+1))

print(areas)
'''
'''
def summator(*args):
    x = 0
    for i in args:
        x = x + i
    return x 

print(summator(56,25,8,56,21))
print(summator(1,2,3,4,5))
'''
def EvenOdd(*numbers):
    even_numbers = []
    for i in numbers:
        if i % 2 == 0:
            even_numbers.append(i)
    return even_numbers

print(*EvenOdd(1, 2, 3, 4, 5, 6, 7, 8, 9))