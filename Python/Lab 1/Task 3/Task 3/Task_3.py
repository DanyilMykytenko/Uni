import random

i = int(0)
numbers = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
negativeNumbers = []
while i < 10:
    numbers[i] = int(random.uniform(-10, 10))
    i += 1
i = int(0)
oddSum = int(0)
k = int(0)
min = numbers[0]
while i < 10:
    if numbers[i] < min:
        min = numbers[i]
    if numbers[i] < 0:
        negativeNumbers.append(numbers[i])
    if numbers[i] % 2 == 0:
        k += 1
        oddSum += numbers[i]
    i += 1

print("Максимальный отрицательный элемент массива: ", min)
print("Среднее арифметическое нечётных чисел равно ", oddSum / k)
print("Все отрицательные элементы: ")
i = int(0)
while i < len(negativeNumbers):
    print(negativeNumbers[i])
    i += 1
