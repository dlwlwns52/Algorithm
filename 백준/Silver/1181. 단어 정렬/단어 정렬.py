n = int(input())
words = set()  # 중복 제거를 위한 집합

for _ in range(n):
    words.add(input())

# 길이에 따라 정렬하고, 그 다음에 사전 순으로 정렬
sorted_words = sorted(words, key=lambda x: (len(x), x))

for word in sorted_words:
    print(word)
