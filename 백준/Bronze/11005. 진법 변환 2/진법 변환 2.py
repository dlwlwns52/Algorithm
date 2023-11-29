alpha = ['0','1', '2', '3', '4', '5', '6', '7', '8', '9','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

num = list(map(int, input().split()))
result = []

while num[0] > 0:
    remainder = num[0] % num[1]
    num[0] = num[0] // num[1]
    result.append(alpha[remainder])

result.reverse()

for digit in result:
    print(digit, end="")
