def solution(dirs):
    answer = 0
    count_list = []
    start = [0, 0]
    end = [0, 0]

    for i in range(len(dirs)):
        if dirs[i] == "U":
            if end[1] == 5:
                continue
            else:
                end[1] += 1

        elif dirs[i] == "D":
            if end[1] == -5:
                continue
            else:
                end[1] -= 1

        elif dirs[i] == "R":
            if end[0] == 5:
                continue
            else:
                end[0] += 1

        elif dirs[i] == "L":
            if end[0] == -5:
                continue
            else:
                end[0] -= 1

        # 🔑 핵심 수정 1: 길을 하나의 값으로 표현
        path = tuple(sorted([tuple(start), tuple(end)]))

        # 🔑 핵심 수정 2: 길 하나 기준으로 비교
        if path not in count_list:
            count_list.append(path)
            answer += 1

        # 🔑 핵심 수정 3: start를 end로 이동
        start = end.copy()

    return answer
