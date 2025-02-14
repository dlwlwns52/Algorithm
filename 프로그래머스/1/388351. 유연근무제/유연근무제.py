def solution(schedules, timelogs, startday):
    answer = 0
    theday = startday
    countday = 0
    for i, v in enumerate(schedules):
        for k in timelogs[i]:
            if theday == 6 :
                countday +=1
                theday += 1
                continue
                
            if theday == 7:
                countday +=1
                theday = 1
                continue
                
            else:

                k_n = k % 100
                v_m = v // 100
                v_n = v % 100 + 10
                if (v_n >= 60):
                    v_m += 1
                    v_n -= 60
                k_m = k // 100
                    
                if (v_m*100 + v_n) >= (k_m*100 + k_n):
                    countday +=1
            theday += 1
            
        if countday == 7:
            answer += 1
            
        theday = startday
        countday = 0
        
        
    return answer