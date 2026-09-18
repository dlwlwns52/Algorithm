#include<vector>
#include<queue>
using namespace std;


int solution(vector<vector<int> > maps)
{
    int answer = 0;
    vector<vector<bool>> visited(maps.size(), vector<bool>(maps[0].size(), false));
    queue<vector<int>> q;
    vector<int> dx = {0,0,-1,1};
    vector<int> dy = {1,-1,0,0};
    
    q.push({0,0,1});
    visited[0][0]= true;
    while(!q.empty()){
        vector<int> f = q.front();
        q.pop();
        
        if(f[0] == maps[0].size()-1 && f[1] == maps.size()-1){
            answer = f[2];
        }
    
        for(int i=0; i<4; i++){
            int nx = f[0] + dx[i];
            int ny = f[1] + dy[i];
            if(0<=nx && nx < maps[0].size() && 0 <= ny && ny < maps.size() && visited[ny][nx] == false && maps[ny][nx] == 1){
              visited[ny][nx]= true;
                q.push({nx,ny,f[2]+1});
            }
        }

    }
        
    if(answer ==0){
        return -1;
    }
    return answer;
}



// 큐선언(x,y,count), visited생성, 동서남북전역변수
// 1. 큐에 초기값을 넣는다 push
// 2. while(큐가 안비어있을때까지)
//  - front값 확인
//  - 큐값 pop
//  - 현재 front x,y 값이 maps 사이즈 -1이라면 count값 answer에 넣기
//  - 현재 방문처리
//  - for 동서남북 , map안에있고 방문안했고 1이라면 push(nx,ny,count+1)
// 3. answer=0이면 -1반환 