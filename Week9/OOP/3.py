print("Welcome to the Weekly Expenses Tracker")
days = int(input("Enter the number of days you want to track expenses for the week: "))
total = 0.0
max = 0
for i in range(1, days + 1):
    while True:
        try:
            value = float(input("Day " + str(i) + "- Enter the daily expense: "))
            total += value
            if value > max :
              max = value
            break
        except ValueError as e:
            print("Please enter a valid numeric value.")

print("Total Weekly Expenses: ", total)
print("Max : ", max)