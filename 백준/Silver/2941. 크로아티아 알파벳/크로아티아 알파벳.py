al = input()
cro = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj','s=','z=']
count = 0

for i in range(len(cro)):
    while cro[i] in al:
        count+=1
        al = al.replace(cro[i], " ", 1)

al= al.replace(" ", "")
count += len(al)
print(count)