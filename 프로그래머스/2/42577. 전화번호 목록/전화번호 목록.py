def solution(phone_book):
    answer = True
    
    phone_book.sort()
    # print(phone_book)
    for i in range(len(phone_book)-1):
        if len(phone_book[i]) > len(phone_book[i+1]):
            if phone_book[i+1] == phone_book[i][:len(phone_book[i+1])]:
                return False
        elif len(phone_book[i]) < len(phone_book[i+1]):
            if phone_book[i] == phone_book[i+1][:len(phone_book[i])]:
                return False
        else:
             if phone_book[i] == phone_book[i+1]:
                return False
            
    return answer

# 접두어 접두사?

# 배열안에 문자열 있을때 길이순으로 정렬하려면 어떻게하지
#배열 하나 더만들어서 ㅣㅇㄴ덱스 순으로 넣으면 될거같긴함

# 넣은다음에 해당 길이만큼 존재하는지 슬라이스해서? 이중 ofor문될거같은데 n^2 어떻게 더 줄일까..
# 