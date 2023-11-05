import sys

# 첫 줄에 테스트케이스의 개수 T를 입력 받습니다.
T = int(sys.stdin.readline().rstrip())

# 각 테스트케이스를 처리합니다.
for _ in range(T):
    a, b = map(int, sys.stdin.readline().split())
    result = a + b
    print(result)
