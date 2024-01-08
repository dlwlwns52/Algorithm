a,b = map(int, input().split())
array = list(map(int, input().split()))
    
array.sort()
print(array[a-b])