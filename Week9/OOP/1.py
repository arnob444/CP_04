expense = [50, 30, 15, -9, 20, 18, 25]
def custom_sum(expense):
  mx = 0
  mn = 1000
  total = 0
  for i in expense:
    if i > 0 :
      if i > mx:
       mx = i
      if i < mn:
       mn = i
      if i % 3 != 0:
       total = total + i

  print("Max expense : ",mx)
  print("Min expense : ",mn)
  total = total - mx
  return total

ans = custom_sum(expense)
print("Total expense (excluding multiples of 3 and maximum expense):", ans)