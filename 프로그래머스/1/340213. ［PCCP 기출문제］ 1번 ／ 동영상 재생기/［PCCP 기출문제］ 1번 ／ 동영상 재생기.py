
def changeSeconds(str_time):
    minutes, seconds = map(int, str_time.split(':'))
    total_time = minutes*60 + seconds
    return total_time

def changeHour(total_time):
    minutes, seconds = divmod(total_time, 60)
    return f"{minutes:02}:{seconds:02}"

def solution(video_len, pos, op_start, op_end, commands):
    answer = ''
    # 시간을 초 단위로 변환
    video_len_sec = changeSeconds(video_len)
    pos_sec = changeSeconds(pos)
    op_start_sec = changeSeconds(op_start)
    op_end_sec = changeSeconds(op_end)
        
#         처음에 오프닝 구간에 있으면 오프닝으로 변경
    if op_start_sec <= pos_sec <= op_end_sec:
        pos_sec = op_end_sec
        
    for i in commands:
        if i == 'next':
            pos_sec = min(video_len_sec, pos_sec+10)
        if i == 'prev':
            pos_sec = max(0, pos_sec-10)
            
        if op_start_sec <= pos_sec <= op_end_sec:
            pos_sec = op_end_sec    
        
    answer = changeHour(pos_sec)
    
    return answer
