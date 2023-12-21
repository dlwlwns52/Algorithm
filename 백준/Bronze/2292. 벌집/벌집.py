N = int(input())
count = 1
bee_house = 1

while(True):
    if(N > bee_house):
        bee_house += count * 6
        count += 1
    else:
        print(count)
        break