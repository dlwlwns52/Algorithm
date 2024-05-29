def solution(N, number):
    if N == number:
        return 1

    dp = [set() for _ in range(9)]

    for i in range(1,9):
        dp[i].add(int(str(N)*i))
        for k in range(1,i):
            for j in dp[k]:
                for p in dp[i-k]:
                    dp[i].add(j+p)
                    dp[i].add(j-p)
                    dp[i].add(j*p)
                    if p != 0:
                        dp[i].add(j/p)

        if number in dp[i]:
            return i
    return -1





