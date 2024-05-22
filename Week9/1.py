class ShoppingCart:
    def __init__(self):
        self.items = []
        self.total_price = 0

    def add_item(self, item_name, price):
        self.items.append((item_name, price))
        self.total_price += price

    def remove_item(self, item_name):
        for item in self.items:
            if item[0] == item_name:
                self.total_price -= item[1]
                self.items.remove(item)
                break

    def apply_discount(self, customer_type):
        if customer_type == "regular":
            if self.total_price > 1000:
                self.total_price *= 0.95
        elif customer_type == "premium":
            if self.total_price > 500:
                self.total_price *= 0.95

    def print_receipt(self):
        print("Item list from Pricing System:")
        for item in self.items:
            print(f"{item[0]} - ${item[1]:.2f}")
        print(f"Total price: ${self.total_price:.2f}")


class RegularCustomer(ShoppingCart):
    def apply_discount(self):
        super().apply_discount("regular")


class PremiumCustomer(ShoppingCart):
    def apply_discount(self):
        super().apply_discount("premium")


regular_cart = RegularCustomer()
regular_cart.add_item("Laptop", 1000)
regular_cart.add_item("T-Shirt", 20)
regular_cart.apply_discount()
regular_cart.print_receipt()

premium_cart = PremiumCustomer()
premium_cart.add_item("Laptop", 1000)
premium_cart.add_item("T-Shirt", 20)
premium_cart.apply_discount()
premium_cart.print_receipt()
