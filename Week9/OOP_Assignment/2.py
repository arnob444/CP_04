class Item:
    def __init__(self, name, category, price, initial_stock):
        self.name = name
        self.category = category
        self.price = price
        self.stock = initial_stock

    def update_stock(self, amount):
        self.stock += amount
        self.check_stock_level()

    def sell_item(self, quantity):
        if quantity > self.stock:
            print(f"Not enough stock to sell {quantity} units of {self.name}.")

            return False
        else:
            self.stock -= quantity
            self.check_stock_level()
            return True

    def check_stock_level(self):
        pass

    def low_stock_alert(self):
        pass

    def generate_sales_report(self):
        return f"Item: {self.name}, Category: {self.category}, Price: ${self.price}, Current Stock Level: {self.stock} units"


class Electronics(Item):
    def __init__(self, name, price, initial_stock, warranty_period):
        super().__init__(name, "Electronics", price, initial_stock)
        self.warranty_period = warranty_period

    def check_stock_level(self):
        if self.stock < 5:
            self.low_stock_alert()

    def low_stock_alert(self):
        print(
            f"Alert: Stock for {self.name} is low (current stock: {self.stock} units). Consider restocking."
        )


class Clothing(Item):
    def __init__(self, name, price, initial_stock, size):
        super().__init__(name, "Clothing", price, initial_stock)
        self.size = size

    def check_stock_level(self):
        if self.stock < 20:
            self.low_stock_alert()

    def low_stock_alert(self):
        print(
            f"Alert: Stock for {self.name} is low (current stock: {self.stock} units). Consider restocking."
        )


class Groceries(Item):
    def __init__(self, name, price, initial_stock, expiry_date):
        super().__init__(name, "Groceries", price, initial_stock)
        self.expiry_date = expiry_date

    def check_stock_level(self):
        if self.stock < 15:
            self.low_stock_alert()

    def low_stock_alert(self):
        print(
            f"Alert: Stock for {self.name} is low (current stock: {self.stock} units). Consider restocking."
        )


name = "Laptop"
price = 1200
initial_stock = 50
warranty_period = "2 years"
laptop = Electronics(name, price, initial_stock, warranty_period)
print(laptop.generate_sales_report())
laptop.update_stock(20)
laptop.sell_item(5)
print(laptop.generate_sales_report())

name = "T-Shirt"
price = 20
initial_stock = 200
size = "L"
tshirt = Clothing(name, price, initial_stock, size)
print(tshirt.generate_sales_report())
tshirt.update_stock(50)
tshirt.sell_item(180)
print(tshirt.generate_sales_report())

name = "Apples"
price = 2
initial_stock = 100
expiry_date = "2024-12-31"
apples = Groceries(name, price, initial_stock, expiry_date)
print(apples.generate_sales_report())
apples.update_stock(30)
apples.sell_item(120)
print(apples.generate_sales_report())


# class Item:
#     def __init__(self, name, category, price, stock_level):
#         self.name = name
#         self.category = category
#         self.price = price
#         self.stock_level = stock_level

#     def update_stock_level(self, quantity):
#         self.stock_level += quantity

#     def generate_report(self):
#         return f"Item Details:\nName: {self.name}\nCategory: {self.category}\nPrice: ${self.price}\nCurrent Stock Level: {self.stock_level} units"


# class Electronics(Item):
#     def __init__(self, name, price, stock_level):
#         super().__init__(name, "Electronics", price, stock_level)


# class Clothing(Item):
#     def __init__(self, name, price, stock_level):
#         super().__init__(name, "Clothing", price, stock_level)


# class Groceries(Item):
#     def __init__(self, name, price, stock_level):
#         super().__init__(name, "Groceries", price, stock_level)


# print("Choose item category (electronics/clothing/groceries):")
# op = input()

# if op == "electronics":
#     item = Electronics("Phone", 100, 50)
# elif op == "clothing":
#     item = Clothing("Shirt", 50, 100)
# elif op == "groceries":
#     item = Groceries("Apple", 2, 100)
# else:
#     print("Invalid category")

# print(item.generate_report())
