#include<vector>
#include<queue>
#include<iostream>
using namespace std;

int solution(vector<vector<int>> maps)
{
    int answer = 0;
    int n = maps.size();
    int m = maps[0].size();
    vector<vector<bool>> bool_v(n, vector<bool>(m, false));
    
//     북 남 동 서
    vector<int> dx = {0,0,1,-1};
    vector<int> dy = {1,-1,0,0}; 
    
    queue<vector<int>> v;
    
    v.push({0,0, 1});
    
    while(!v.empty()){
        vector<int> q = v.front();
        v.pop();
        
        if(q[0] == m-1 && q[1]==n-1){
            answer = q[2];
            break;
        }
  
        for(int i=0; i<4; i++){
            int nx = q[0] + dx[i];
            int ny = q[1] + dy[i];
            if(0 <= nx && nx < m && 0 <= ny && ny < n && !bool_v[ny][nx]){
                if (maps[ny][nx] == 1){
                    bool_v[ny][nx] = true;
                    int cnt =q[2] +1;
                    v.push({nx, ny, cnt});
            }
            }
        }
    }
    if (answer == 0){
        return -1;
    }
    
    return answer;
}


// 최단거리 bfs
// 0인곳과 nxm바깥부분 안됨
// (n-1, m-1) 에 도달하면 종료
// - bool nxm false배열 생성
// - 이동 좌표 배열 생성 dx dy
// - 현재값 true
// while은 true로 했다가 더이상 갈곳없으면 return 