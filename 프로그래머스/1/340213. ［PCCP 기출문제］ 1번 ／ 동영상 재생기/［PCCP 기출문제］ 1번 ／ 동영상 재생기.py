def solution(video_len, pos, op_start, op_end, commands):
    # 시간을 초 단위로 변환하는 함수
    def to_seconds(time_str):
        mm, ss = map(int, time_str.split(":"))
        return mm * 60 + ss

    # 초 단위를 "mm:ss" 형식으로 변환하는 함수
    def to_mmss(seconds):
        mm = seconds // 60
        ss = seconds % 60
        return f"{mm:02}:{ss:02}"

    # 입력값들을 초 단위로 변환
    video_len_sec = to_seconds(video_len)
    pos_sec = to_seconds(pos)
    op_start_sec = to_seconds(op_start)
    op_end_sec = to_seconds(op_end)

    # 명령어 처리
    for command in commands:
        if op_start_sec <= pos_sec <= op_end_sec:  # 오프닝 구간 체크
            pos_sec = op_end_sec

        if command == "next":
            pos_sec += 10
            if pos_sec > video_len_sec:  # 최대 시간 초과 방지
                pos_sec = video_len_sec

        elif command == "prev":
            pos_sec -= 10
            if pos_sec < 0:  # 최소 시간 미만 방지
                pos_sec = 0

    # 마지막으로 오프닝 구간 체크
    if op_start_sec <= pos_sec <= op_end_sec:
        pos_sec = op_end_sec

    # 결과 반환
    return to_mmss(pos_sec)
