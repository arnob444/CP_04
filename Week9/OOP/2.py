num1 = float(input())
num2 = float(input())
op = str(input())

def simple_calculator(num1, num2, op):
  if op == '+':
    ans = num1 + num2
  elif op == '-':
    ans = num1 - num2
  elif op == '*':
    ans = num1 * num2
  elif op == '/':
    ans  = num1 / num2
  return float(ans)

res = simple_calculator(num1, num2, op)
print("Result of",num1,op,num2,":", float(res))