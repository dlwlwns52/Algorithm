N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]
blue = 0
white = 0 


def sol(x, y, N):
  global blue, white
  color = arr[x][y]
  for i in range(x, x+N):
    for j in range(y, y+N):
      if arr[i][j] != arr[x][y]:
        sol(x,y,N//2)
        sol(x+N//2 ,y ,N//2)
        sol(x , y+N//2 , N//2)
        sol(x+N//2 ,y+N//2 ,N//2)
        return

  if 1 == color:
    blue += 1
  elif 0 == color:
    white += 1


sol(0,0,N)
print(white)
print(blue)