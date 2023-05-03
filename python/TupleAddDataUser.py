'''
    Author: Bhautik Gondaliya
    Date of Creation: 21th Feb 2023
    Task: Add data to tuple from user and print it.
'''

users=[]
a = int(input("Enter the number of data you want to store: "))
for i in range(a):
    name=input("Enter Your Name:-")
    age=int(input("Enter Your age:-"))
    users.append((name,age))
print(tuple(users))