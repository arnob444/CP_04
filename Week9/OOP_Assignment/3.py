class Addition:
    def add(self):
        pass

class NormalAddition(Addition):
    def __init__(self, num1, num2):
        self.num1 = num1
        self.num2 = num2
    def add(self):
        return self.num1 + self.num2

class ComplexAddition(Addition):
    def __init__(self, real1, imag1, real2, imag2):
        self.real1 = real1
        self.imag1 = imag1
        self.real2 = real2
        self.imag2 = imag2

    def add(self):
        real_sum = self.real1 + self.real2
        imag_sum = self.imag1 + self.imag2
        return f"{real_sum} + {imag_sum}i"

num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))
normal_addition = NormalAddition(num1, num2)
normal_result = normal_addition.add()
print(f"Sum of the two numbers: {normal_result}")

real1 = float(input("Enter the real part of first complex number: "))
imag1 = float(input("Enter the imaginary part of first complex number: "))
real2 = float(input("Enter the real part of second complex number: "))
imag2 = float(input("Enter the imaginary part of second complex number: "))
complex_addition = ComplexAddition(real1, imag1, real2, imag2)
complex_result = complex_addition.add()
print(f"Sum of the two complex numbers: {complex_result}")
