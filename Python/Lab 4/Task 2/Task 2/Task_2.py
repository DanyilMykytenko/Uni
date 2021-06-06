import collections

f = open('book.txt', 'r');
bookText = f.read();
print(bookText);

print('Количество символов с пробелами в тексте = ', len(bookText))
trimmedBook = bookText.replace(' ', '')
print('Количество символов без пробелов в тексте = ', len(trimmedBook))
words = bookText.split()
i = 0
while(i < len(words)):
    print(words[i], ' - ', bookText.count(words[i]))
    i += 1

senteces = bookText.split('.')
senteces.pop()
i = 0
wordsCounter = []
while(i < len(senteces)):
    wordsCounter.append(senteces[i].count(' '))
    if(i == 0):
        wordsCounter[i] += 1
    print('Количество слов в предложение #', i+1, ' - ', wordsCounter[i])
    i+=1