def reverse(A):
 print( A[::-1])

A = []
n = int(input("Enter the no of elements: "))

for i in range(0, n):
    ele = int(input())

    A.append(ele)

print(A)
reverse(A)
