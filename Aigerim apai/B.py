# Input reading
n = int(input())  # Number of digits
decimal_part = input().strip()  # The digits after the decimal point

# Attempt to find a and b
a = int(decimal_part)  # Consider the decimal digits as a whole number
b = 10 ** n  # b should be 1 followed by n zeros to shift the decimal point

# Simplify the fraction
import math
gcd = math.gcd(a, b)
a //= gcd
b //= gcd

# Ensure 0 < a < b < 10^6
if 0 < a < b < 10**6:
    print("YES")
    print(a, b)
else:
    print("NO")
