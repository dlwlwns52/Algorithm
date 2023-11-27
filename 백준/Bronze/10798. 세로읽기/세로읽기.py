tot = []
ma = 0
imsi = []
for i in range(5):
    spel = list(input())
    for k in range(len(spel)):
        imsi.append(spel[k])
    tot.append(imsi)
    imsi = []

    if ma < len(tot[i]):
        ma = len(tot[i])

for i in range(ma):
    for k in range(5):
        while(len(tot[k]) < ma):
            tot[k].append("")
        print(tot[k][i],end="")