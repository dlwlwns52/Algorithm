num = int(input())

quar = 25
dime = 10
nick = 5
peni = 1

countq = 0
countd = 0
countn = 0
countp = 0

answer = []

for i in range(num):
    a = int(input())
    while a > 0:
        if a >=25:
            a -= quar
            countq+=1
            
        elif 25 > a >= 10:
            a -= dime
            countd +=1
            
        elif 10 > a >= 5:
            a -= nick
            countn +=1
            
        elif 5 > a > 0:
            a -= peni
            countp +=1
            
        elif a == 0 :
            break

    answer.append(countq)
    answer.append(countd)
    answer.append(countn)
    answer.append(countp)
    for i in range(len(answer)):
        print(answer[i], end= " ")
    countq = 0
    countd = 0
    countn = 0
    countp = 0
    answer = []
      

        
    