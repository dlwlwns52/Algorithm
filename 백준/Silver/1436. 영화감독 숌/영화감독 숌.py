n = int(input())
count = 0
num = 666

while(True):
    if "666" in str(num):
        count +=1
        if n == count:
            print(num)
            break
        else:
            num+=1
            continue

    else:
        num += 1



