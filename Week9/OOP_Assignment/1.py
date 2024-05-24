class ShoppingCart:
    def __init__(self):
        self.electronics = ["laptop", "phone", "calculator", "accesories"]
        self.cloths = ["t-shirt", "shirt", "pants", "trousers"]
        self.cart = {}

    def add_item_to_the_card(self, item, price):
        self.cart[item] = price

    def remove_item_from_the_card(self, item):
        del self.cart[item]

    def total_price(self):
        pass


class regular_customer(ShoppingCart):
    def total_price(self):
        total = 0
        for x, y in self.cart.items():
            if x.lower() in self.electronics:
                y -= y * 0.05
                total += y
            else:
                total += y
        if total > 1000:
            total -= total * 0.02
        print(f"Total Price: ${total}")


class premium_customer(ShoppingCart):
    def total_price(self):
        total = 0
        for x, y in self.cart.items():
            if x.lower() in self.electronics:
                y -= y * 0.1
                total += y
            elif x.lower() in self.cloths:
                y -= y * 0.1
                total += y
            else:
                total += y
        if total > 1000:
            total -= total * 0.05
        print(f"Total Price: ${total}")


customer1 = regular_customer()
customer1.add_item_to_the_card("Laptop", 1000)
customer1.add_item_to_the_card("t-shirt", 20)
customer1.remove_item_from_the_card("Laptop")
customer1.total_price()




# class ShoppingCart:
#     def __init__(self):
#         self.items = []
#         self.total_price = 0

#     def add_item(self, item_name, price):
#         self.items.append((item_name, price))
#         self.total_price += price

#     def remove_item(self, item_name):
#         for item in self.items:
#             if item[0] == item_name:
#                 self.total_price -= item[1]
#                 self.items.remove(item)
#                 break

#     def apply_discount(self, customer_type):
#         if customer_type == "regular":
#             if self.total_price > 1000:
#                 self.total_price *= 0.95
#         elif customer_type == "premium":
#             if self.total_price > 500:
#                 self.total_price *= 0.95

#     def print_receipt(self):
#         print("Item list from Pricing System:")
#         for item in self.items:
#             print(f"{item[0]} - ${item[1]:.2f}")
#         print(f"Total price: ${self.total_price:.2f}")


# class RegularCustomer(ShoppingCart):
#     def apply_discount(self):
#         super().apply_discount("regular")


# class PremiumCustomer(ShoppingCart):
#     def apply_discount(self):
#         super().apply_discount("premium")


# regular_cart = RegularCustomer()
# regular_cart.add_item("Laptop", 1000)
# regular_cart.add_item("T-Shirt", 20)
# regular_cart.apply_discount()
# regular_cart.print_receipt()

# premium_cart = PremiumCustomer()
# premium_cart.add_item("Laptop", 1000)
# premium_cart.add_item("T-Shirt", 20)
# premium_cart.apply_discount()
# premium_cart.print_receipt()
