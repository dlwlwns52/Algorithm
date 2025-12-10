def solution(arr1, arr2):
    answer = []
    arr_sum_array = []
    arr_sum = 0
    for i in range(len(arr1)): 
        for k in range(len(arr2[0])):
            arr_sum = 0
            for j in range(len(arr1[0])): 
                arr_sum += arr1[i][j] * arr2[j][k]
            arr_sum_array.append(arr_sum)
        answer.append(arr_sum_array)
        arr_sum_array = []    
    return answer

# arr1[0][0] + arr2[0][0]
# arr1[0][1] + arr2[1][0]
# arr1[0][0] + arr2[0][1]
# arr1[0][1] + arr2[1][1]
# + 
# arr1[1][0] + arr2[0][0]
# arr1[1][1] + arr2[1][0]
# arr1[1][0] + arr2[0][1]
# arr1[1][1] + arr2[1][1]

