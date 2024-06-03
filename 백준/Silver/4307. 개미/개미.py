import sys

test = int(sys.stdin.readline())
arr = []
answer = []

for i in range(test):
  l, t = map(int, sys.stdin.readline().split())
  for i in range(t):
    n = int(sys.stdin.readline())
    arr.append(n)
    arr.append(l-n)
  arr.sort()
  answer.append(arr[(len(arr)//2) -1])
  answer.append(arr[(len(arr)-1)])
  for i in range(len(answer)):
    print(answer[i], end = " ")

  arr=[]
  answer=[]