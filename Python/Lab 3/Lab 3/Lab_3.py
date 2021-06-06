import os
import glob

def last_letter(word):
    return word[::-1]

KI_list = []

f = open('KI.txt', 'w')
f.write('Mykytenko Danyil - 5')
f.write('\nDerevyanko Oleksandr - 5')
f.write('\nZobenko Pavlo - 3')
f.write('\nKvach Daniyl - 4')
f.write('\nRisovaniy Maxim - 5')
f.write('\nKovalyov Danylo - 5')

f.close()

f = open('KI.txt', 'a')
f.write('\nNebesniy Andriy - 5')

f.close()

f = open('KI.txt', 'r')
i=0
while i < 8:
    KI_list.append(f.readline())
    i+=1
i=0
while i < 8:
    print(KI_list[i])
    i+=1
    
f.close()

print(sorted(KI_list, reverse = True, key=last_letter))

print("\n",glob.glob('./*.txt'))

f = open('KI.txt', 'r')
KI_list = f.read()
f.close()

ff = open('KB.txt', 'r')
KB_list = ff.read()
ff.close()

item = 'Mykytenko Danyil'
if KI_list.count(item) != 0:
    print('\nStudent is in KI group')
elif KB_list.count(item) != 0:
    print('\nStudent is in KB group')