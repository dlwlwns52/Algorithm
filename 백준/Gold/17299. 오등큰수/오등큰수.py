import sys

n = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))

C = {}

for i in A:
  if i in C:
    C[i] += 1
  else:
    C[i] = 1
B = []
count = 0
for i in A:
  count = C[i]
  B.append(count)


answer = [-1] * n
stack = [0]

for i in range(1, n):
  while stack and B[i] > B[stack[-1]]:
    answer[stack.pop()] = A[i]
  stack.append(i)

for i in range(len(answer)):
    print(answer[i], end=" ")