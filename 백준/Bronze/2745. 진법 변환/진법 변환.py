alpha = ['0','1', '2', '3', '4', '5', '6', '7', '8', '9','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
su = 0
ar = []
ne = []

num = list(input().split())
num[1] = int(num[1])

for i in range(len(num[0])):
    ar.append(num[0][i])

for i in range(len(num[0])):
    if ar[i] in alpha:
        ne.append((alpha.index(ar[i])))
        su += ne[i]*(num[1]**(len(ar)-i-1))

print(su)