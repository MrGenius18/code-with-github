'''
    Author: Bhautik Gondaliya
    Date of Creation: 17th Feb 2023
    Task: Program to find the Net salary of Employee after tax 
          and take input of salary on monthly basis

'''


salary = float(input("Enter employee's monthly salary: "))
salary=salary*12

if salary > 1500000:
    tax_rate = 0.2
    tax_amount = salary * tax_rate
elif salary > 1000000:
    tax_rate = 0.15
    tax_amount = salary * tax_rate
elif salary > 500000:
    tax_rate = 0.1
    tax_amount = salary * tax_rate
elif salary > 200000:
    tax_rate = 0.05
    tax_amount = salary * tax_rate
else:
    tax_rate = 0
    tax_amount = 0

net_salary = salary - tax_amount

print("Employee's monthly salary: ", salary/12)
print("Tax rate: ", tax_rate)
print("Tax amount: ", tax_amount)
print("Net salary: ", net_salary)