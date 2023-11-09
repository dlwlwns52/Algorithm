students = []
for i in range(1,31):
    students.append(i)

for i in range(28):
    check = int(input())
    students.remove(check)
    
students.sort()

for i in range(len(students)):
    print(students[i])
    
         
    