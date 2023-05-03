'''
    Author: Bhautik Gondaliya
    Date of Creation: 21th Feb 2023
    Task: Twin Number
'''

n=int(input("Enter the number: "))
temp=n

# Sum of digits
strn=str(n)
sum=0

for digit in strn:
    sum += int(digit)


# Product of digits
strn=str(temp)
product=1

for digit in strn:
    product *= int(digit)

# Comparing both
if(sum==product):
    print("Number is twin number")
else:
    print("Number is not twin number")