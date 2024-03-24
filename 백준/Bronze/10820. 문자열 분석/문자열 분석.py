alpa = "abcdefghijklmnopqrstuvwxyz"
ALPA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
space = " "
num ="0123456789"
answer = []

count_a = 0
count_A = 0
count_num = 0
count_space = 0

while True:
    try:
        n = list(input())
     #   for i in range(len(n)):
        while n:
            i = 0
            if n[i] in alpa:
                count_a += n.count(n[i])
                s = n [i]
                t = n[i]
                while t in n:
                    n.pop(n.index(t))
                    
            elif n[i] in ALPA:
                count_A += n.count(n[i])
                t = n[i]
                while t in n:
                    n.pop(n.index(t))
                    
            elif n[i] in space:
                count_space += n.count(n[i])
                t = n[i]
                while t in n:
                    n.pop(n.index(t))
                    
            elif n[i] in num:
                count_num += n.count(n[i])
                t = n[i]
                while t in n:
                    n.pop(n.index(t))
                    
        answer.append(count_a)
        answer.append(count_A)
        answer.append(count_num)
        answer.append(count_space)
        
        for i in range(4):
            print(answer[i], end= " ")
        answer= []
        count_a = 0
        count_A = 0
        count_num = 0
        count_space = 0
    except EOFError:
        break
         
        
            
    