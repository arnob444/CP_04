class Item:
    def __init__(self, name, category, price, stock_level):
        self.name = name
        self.category = category
        self.price = price
        self.stock_level = stock_level

    def update_stock_level(self, quantity):
        self.stock_level += quantity

    def generate_report(self):
        return f"Item Details:\nName: {self.name}\nCategory: {self.category}\nPrice: ${self.price}\nCurrent Stock Level: {self.stock_level} units"


class Electronics(Item):
    def __init__(self, name, price, stock_level):
        super().__init__(name, "Electronics", price, stock_level)


class Clothing(Item):
    def __init__(self, name, price, stock_level):
        super().__init__(name, "Clothing", price, stock_level)


class Groceries(Item):
    def __init__(self, name, price, stock_level):
        super().__init__(name, "Groceries", price, stock_level)


print("Choose item category (electronics/clothing/groceries):")
op = input()

if op == "electronics":
    item = Electronics("Phone", 100, 50)
elif op == "clothing":
    item = Clothing("Shirt", 50, 100)
elif op == "groceries":
    item = Groceries("Apple", 2, 100)
else:
    print("Invalid category")

print(item.generate_report())