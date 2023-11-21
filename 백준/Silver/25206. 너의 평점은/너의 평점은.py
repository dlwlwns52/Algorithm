result = []
grades = ["A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F", "P"]
score = [4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0]
sum_major = 0
idx = 0

for i in range(20):
    total = list(input().split())

    if total[2] != 'P':
        sum_major += float(total[1]) #전공 합
        if total[2] in grades:
            idx = grades.index(total[2])
            total[2] = score[idx]
            result.append(float(total[1]) * total[2]) #학점 x 과목평점
    
    else:
        continue
            
total_sum = 0
for i in range(len(result)):
    total_sum += result[i]

print("{:.6f}".format(total_sum/sum_major))
    