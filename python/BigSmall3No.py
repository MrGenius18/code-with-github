'''
    Author: Bhautik Gondaliya
    Date of Creation: 17th Feb 2023
    Task: To create a program where user enters three numbers 
          and find out which one is big and which one is small
'''


num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
num3 = int(input("Enter the third number: "))


if num1==num2==num3:
    print("\nAll the numbers are equal\n")

# Find the biggest number
if num1 > num2 and num1 > num3:
    biggest = num1
elif num2 > num1 and num2 > num3:
    biggest = num2
else:
    biggest = num3

# Find the smallest number
if num1 < num2 and num1 < num3:
    smallest = num1
elif num2 < num1 and num2 < num3:
    smallest = num2
else:
    smallest = num3

print("\nThe biggest number is", biggest)
print("\nThe smallest number is", smallest)