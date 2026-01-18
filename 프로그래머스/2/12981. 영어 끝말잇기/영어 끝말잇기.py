def solution(n, words):
    answer = []

    for i in range(1, len(words)):
        if words[i][0] != words[i-1][-1] or words[i] in words[:i]:
            #  i 5 n 2
            answer = [(i%n)+1,  i//n+1]
            return answer
    answer = [0,0]
    # print(n - 5%2)
    return answer

# 순서 어케구하냐        return [(i%n)+1, (i//n)+1]