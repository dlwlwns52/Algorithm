
def backTracking():
  if len(s) == m:
    print(' '.join(map(str, s)))
    return

  for i in range(1, n+1):
    if visited[i]:
      continue
    s.append(i)
    visited[i] = True
    backTracking()
    s.pop()
    visited[i] = False
    

n, m = map(int, input().split())
s = []
visited = [False] * (n+1)
backTracking()