'''
    Author: Bhautik Gondaliya
    Date of Creation: 18th Feb 2023
    Task: Find LCM
'''

import math
n1 = int(input("Enter the first number: "))
n2 = int(input("Enter the second number: "))

print("LCM of",n1,"&",n2,"is",(n1*n2)//math.gcd(n1,n2))