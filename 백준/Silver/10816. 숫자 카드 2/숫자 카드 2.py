n = int(input())
sang = list(map(int, input().split()))
m = int(input())
digit = list(map(int, input().split()))
answer = []

sang_dict = {}
for i in sang:
  if i in sang_dict:
    sang_dict[i] += 1
  else:
    sang_dict[i] = 1

for i in range(m):
  if digit[i] in sang_dict:
       answer.append(sang_dict[digit[i]])

  else: 
    answer.append(0)

for i in range(len(answer)):
    print(answer[i], end= " ")
