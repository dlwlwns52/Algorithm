n = int(input())

def firstTry(n):
    if n == 1:
        return '*'
    
    imsi = firstTry(n//3)
    array = []
    for i in imsi:
        array.append(i*3)
    for i in imsi:
        array.append(i +' '*(n//3) + i)
    for i in imsi:
        array.append(i*3)
        
    return array

print('\n'.join(firstTry(n)))