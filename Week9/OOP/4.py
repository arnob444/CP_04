income  = int(input("Enter income : "))

if income > 0:
  if income <= 10000:
    tax = income *.0
    print("Tax : ",tax)
  elif income >= 10000 and income <= 20000:
    tax = (income - 10000) * .1
    print("Tax : ",tax)
  else :
     tax = (10000 * .1 ) + ((income - 20000) * .2)
     print("Tax : ",tax)
else:
   print("Invalid\n") 