'''
    Author: Bhautik Gondaliya
    Date of Creation: 18th Feb 2023
    Task: Take element from user and add to list
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


print("\n\nThe list is: ", data)  
sort = sorted(data)
print("\nThe sorted list is: ", sort, "\n\n") 