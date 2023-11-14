alpa = [['A', 'B', 'C'], ['D','E','F'], ['G','H','I'], ['J','K', 'L'], ['M','N','O'], ['P','Q','R','S'],['T','U','V'],['W','X','Y','Z']]
a = input()
sum = 0

for i in range(len(a)):
    for k in range(len(alpa)):
        if a[i] in alpa[k]:
            sum += (alpa.index(alpa[k]) + 3)

print(sum)
        