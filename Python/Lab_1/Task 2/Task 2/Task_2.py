numb = int(input("Введите целое число: "))
div = []
print("Результат:", end = " ")
for i in range(numb - 1, 1, -1):
    if (numb % i == 0):
        print(i, end = " ")
        div.append(i)
i = int(0)
sum = int(0)
while i < len(div):
    sum += div[i]
    i += 1
if sum > numb:
    print("\nЧисло является избыточным")