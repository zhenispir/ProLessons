x, y = map(int, input().split())

if x > y:
    ulken = x
else:
    ulken = y
    
while not (ulken%x == 0 and ulken%y == 0):
    ulken = ulken + 1

print(ulken)
