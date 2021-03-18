import math

a = int(input("Введите число А\n"))
b = int(input("Введите число B\n"))
z = math.pow(math.cos(a) - math.cos(b),2) - math.pow(math.sin(a) - math.sin(b),2)
print("z = ", z)
