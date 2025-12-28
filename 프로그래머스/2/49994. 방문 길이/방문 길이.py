def solution(dirs):
    answer = 0
    start = (0,0)
    UDRL = {"U" : [0,1],"D" : [0,-1],"R" : [1,0],"L" : [-1,0]}
    countSet = set()
    for i in dirs:
#         키에서 벨류갑 봅아서 쓰는법 ->  UDRL[i][0] 일케하면됨
  
        dx, dy = start[0]+ UDRL[i][0], start[1]+UDRL[i][1]
   
        if dx < -5 or dx > 5 or dy < -5 or dy > 5:
            continue
        end = (dx, dy)
#         [기존 좌표, 다음 좌표], [다음좌표, 기존 좌표] set에 넣기
#         list1 = []
#         list1.append(start)
#         list1.append(end)
# #         set에 리스트는 못 넣는다
#         countSet.add(tuple(list1))
#         list1 = []
#         list1.append(end)
#         list1.append(start)
#         countSet.add(tuple(list1))
        countSet.add((start[0],start[1],dx,dy))
        countSet.add((dx,dy,start[0],start[1]))
        start = end       
        # print(countSet)

        
    answer = len(countSet) // 2
    return answer