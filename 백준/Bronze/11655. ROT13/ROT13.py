n = input()
alpa = "abcdefghijklmnopqrstuvwxyz" #len -> 26 / index -> 25
ALPA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
answer = []

for i in n:
    if i.islower():
        if alpa.index(i) < 13:
            answer.append(alpa[alpa.index(i) + 13])
        else:
            answer.append(alpa[(alpa.index(i)+13) - 26])
            
    elif i.isupper():
        if ALPA.index(i) < 13:
            answer.append(ALPA[ALPA.index(i) + 13])
        else:
             answer.append(ALPA[(ALPA.index(i)+13) - 26])
    elif i.isdigit():
        answer.append(i)
    elif i.isspace():
        answer.append(i)
        
        
for i in range(len(answer)):
    print(answer[i], end="")
        