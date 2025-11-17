def solution(answers):
    answer = []
    a =[1,2,3,4,5]
    b = [2,1,2,3,2,4,2,5]
    c = [3,3,1,1,2,2,4,4,5,5]
    count_a = 0
    count_b = 0
    count_c = 0
    
    for i in range(len(answers)):
        if a[i % len(a)] == answers[i]:
            count_a +=1
        if b[i % len(b)] == answers[i]:
            count_b +=1
        if c[i % len(c)] == answers[i]:
            count_c +=1
           
    if count_a > count_b and count_a > count_c:
        return [1]
    elif count_b > count_a and count_b > count_c:
        return [2]
    elif count_c > count_b and count_c > count_a:
        return [3]


    if count_a == count_b == count_c:
        return [1,2,3]
    elif count_a == count_b:
        return [1,2]
    elif count_b == count_c:
        return [2,3]
    elif count_a == count_c:
        return [1,3]

