'''
    Author: Bhautik Gondaliya
    Date of Creation: 17th Feb 2023
    Task: Number is positive or negative which is entered by user
'''

print("Enter the number to find the number is positive or negative: ")
a=int(input())

if(a==0):
    print("Number is zero")
elif(a>0):
    print(a,"is positive")
else:
    print(a,"is negative")