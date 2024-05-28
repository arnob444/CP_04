class Person:
    def __init__(self, name, age, height):
        self.name = name
        self.age = age
        self.height = height

    def get_name(self):
        return self.name
    
    def set_name(self,new_name):
        self.name = new_name
        
    def get_summary(self):
        return f"Name : {self.name}\nAge : {self.age}\nHeight : {self.height}"


a_person = Person("arnob", 20, 5.9)
b_person = Person("ashik", 22, 5.5)


print(a_person.get_summary())
# print(a_person.get_name())
# print(b_person.get_name())
