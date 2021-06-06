import random

def QuickSort(A):
    if len(A) <= 1:
        return A
    else:
        q = random.choice(A)
        L = []
        M = []
        R = []
        for elem in A:
            if elem < q:
                L.append(elem) 
            elif elem > q: 
                R.append(elem) 
            else: 
                M.append(elem)
        A = QuickSort(L) + M + QuickSort(R)
        return A

def findItem(A, item):
    i = int(0)
    while i < len(A):
        if item == A[i]:
            return "Your item is under index ", i+1
        i += 1

def minValues(A):
    minValues = []
    i = 0
    while i < 5:
        minValues.append(A[i])
        i += 1
    return minValues

def maxValues(A):
    maxValues = []
    i = int(len(A)/2)
    while i < len(A):
        maxValues.append(A[i])
        i += 1
    return maxValues

def average(A):
    div = int(len(A))
    sum = 0
    i = 0
    while i < len(A):
        sum += A[i]
        i += 1
    return sum/div

a = [10,9,8,7,6,5,4,3,2,1]
a = QuickSort(a)
print(a)
print(findItem(a, 3))
print(minValues(a))
print(maxValues(a))
print(average(a))