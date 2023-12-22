A, B, V = map(int, input().split())

# 첫 날에 올라갈 수 있는 높이를 빼고 남은 높이 계산
remaining = V - A

# 매일 올라갈 수 있는 순수한 높이로 나눔
days = remaining // (A - B)

# 만약 남은 높이가 있으면 하루 추가
if remaining % (A - B) != 0:
    days += 1

# 첫 날을 포함하여 총 일수 출력
print(days + 1)
