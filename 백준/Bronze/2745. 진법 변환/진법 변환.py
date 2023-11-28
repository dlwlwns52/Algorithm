alpha = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

num = input().split()
base = int(num[1])
su = 0

for i in range(len(num[0])):
    digit = num[0][i]
    if digit.isdigit():
        value = int(digit)
    else:
        value = alpha.index(digit)
    su += value * (base ** (len(num[0]) - i - 1))

print(su)
