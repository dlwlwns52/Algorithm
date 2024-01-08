array = []
su = 0

for i in range(5):
    n = int(input())
    array.append(n)
    su += n
su= su//5
print(su)
array.sort()
print(array[2])