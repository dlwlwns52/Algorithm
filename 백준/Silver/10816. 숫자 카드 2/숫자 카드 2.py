import sys
input = sys.stdin.read

# 입력 받기
data = input().split()
N = int(data[0])
NL = list(map(int, data[1:N+1]))
M = int(data[N+1])
ML = list(map(int, data[N+2:]))

# 딕셔너리로 숫자 카드 개수 세기
dic = {}
for i in NL:
    dic[i] = dic.get(i, 0) + 1

# 결과 저장 및 출력
result = []
for k in ML:
    result.append(dic.get(k, 0))

# 공백으로 구분하여 출력
print(' '.join(map(str, result)))
