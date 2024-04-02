# 1. 스택을 사용해보자
# 2. s를 for문으로 stack에 집어넣는데 인덱스 -1자리와 집어넣는 수와 같다면 집어넣지 않는다
# 3. 다 집어 넣은후 1과 0의 개수를 센다
# 4. 만약 길이가 1이면 0을 출력한다.
s = input()
stack =[]
count_0 = 0
count_1 = 1

for i in s:
    if not stack or stack[-1] != i:
        stack.append(i)
if len(stack) == 1:
    print(0)
    
else:
    count_0 = stack.count("0")
    count_1 = stack.count("1")
    print(min(count_0, count_1))