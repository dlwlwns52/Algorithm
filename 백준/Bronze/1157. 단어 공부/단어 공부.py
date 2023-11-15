ina = input().lower()
set_ina = set(ina)
set_arr = []
count_arr = []
read = []

for i in set_ina:
    set_arr.append(i)

    
for i in range(len(set_arr)):
    if set_arr[i] in ina:
        count_arr.append(ina.count(set_arr[i]))
        read = count_arr

count_arr = sorted(count_arr)

if len(count_arr) == 1 :
    print(set_arr[0].upper())

# count_arr[1,2]
elif count_arr[len(count_arr)-2] < count_arr[len(count_arr)-1]:
    print(set_arr[(read.index(count_arr[len(count_arr)-1]))].upper())

elif (count_arr[len(count_arr)-1] == count_arr[len(count_arr)-2]):
    print("?")

     