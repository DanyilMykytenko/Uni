import random

i = int(0)
numbers = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
positiveNumbers = []
while i < 10:
    numbers[i] = int(random.uniform(-10, 10))
    i += 1
i = int(0)
max = numbers[0]
while i < 10:
    if numbers[i] < max:
        max = numbers[i]
    i += 1
i = int(0)
positiveSum = int(0)
k = int(0)
min = numbers[0]
while i < 10:
    if numbers[i] < 0 and numbers[i] < max:
        min = numbers[i]
    if numbers[i] > 0:
        positiveNumbers.append(numbers[i])
        positiveSum += numbers[i]
        k += 1
    i += 1

print("Максимальный отрицательный элемент массива: ", min)
print("Среднее арифметическое положительных чисел равно ", positiveSum / k)
print("Все положителльные элементы: ")
i = int(0)
while i < len(positiveNumbers):
    print(positiveNumbers[i])
    i += 1

