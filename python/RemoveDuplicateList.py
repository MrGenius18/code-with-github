'''
    Author: Bhautik Gondaliya
    Date of Creation: 21th Feb 2023
    Task: Remove duplicates from list
'''
no =0
flag = 1
data =[]
while True:
    flag = int(input("Do you want to continue? 1/0: "))
    if flag == 0:
        break
    no = int(input("Enter a number: "))
    data.append(no)

print("\n\n Original List:",data)

data=[*set(data)]
print("\nList after removing duplicates:",data,"\n\n")