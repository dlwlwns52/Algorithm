#include<vector>
#include<queue>
#include<iostream>
using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    queue<vector<int>> q;
    q.push({0,0,1});
    
    int m = maps[0].size();
    int n = maps.size();
    
    vector<int> dx = {0,0,-1,1};
    vector<int> dy = {1,-1,0,0};
    
    vector<vector<bool>> visited (n, vector(m, false));
    visited[0][0] = true;
    
    while(!q.empty()){
        vector<int> cur = q.front();
        q.pop();
        
        
        if(cur[0] == m-1 && cur[1] == n-1){
            answer = cur[2];
            break;
        }
        for(int i=0; i<4; i++){
            int nx = cur[0] + dx[i];
            int ny = cur[1] + dy[i];
            if(0 <= nx && nx < m && 0 <= ny && ny < n && visited[ny][nx] == false && maps[ny][nx]== 1){
                visited[ny][nx] = true;
                int cnt = cur[2]+1;
                q.push({nx,ny, cnt});
            }
        }
        
    }
    
    if(answer == 0){
        return -1;
    }
    
    return answer;
}


// bfs
// 큐(x,y,거리(1))
// 큐front값체크 후pop
// 만약 x 하고 y가 maps[0].size-1 maps.size-1 에도달하면 거리값 달고 반환
// while문에서는 동서남북중에서 크기 안 넘어가고 1인경우 push