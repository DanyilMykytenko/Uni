print("Введите количество часов: ")
hours = int(input())
amount = int(1)
i = int(0)
while i != hours:
    amount *= 2
    if i+3 > hours:
        break
    i += 3
print("Количество амёб через ", hours, "часов будет равно ", amount)
