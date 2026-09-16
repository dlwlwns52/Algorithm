#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum;
vector<string> maps;
void dfs(int i, int j,  vector<vector<bool>>& visited){
    visited[i][j] = true;
    sum += maps[i][j] - '0';
    
    
    vector<int> dx = {0,0,-1,1};
    vector<int> dy = {1,-1,0,0};
    
    for(int k=0; k<4; k++){
        int nx = j+dx[k];
        int ny = i+dy[k];
        if(0 <= nx && nx < visited[0].size() && 0<= ny && ny < visited.size() && maps[ny][nx] != 'X'){
            if (visited[ny][nx] == false){
                dfs(ny,nx,visited);
            }
          
        }
    }
    
}

vector<int> solution(vector<string> map) {
    maps = map;
    vector<int> answer;
    sum = 0;
    vector<vector<bool>> visited(maps.size(), vector<bool>(maps[0].size(), false));
    
    for(int i=0; i<maps.size(); i++){
        for(int j=0; j<maps[0].size(); j++){
            if(visited[i][j] == false && maps[i][j] != 'X'){
                dfs(i, j, visited);
                answer.push_back(sum);
                sum = 0;
            }
        }
    }   

    if(answer.size() == 0){
        return {-1};
    }
    sort(answer.begin(), answer.end());
    return answer;
}
// 정사각형

// bfs맞나? 

// visited = 배열 크기만큼 - 하나만 있어도된다.
// dfs로 하고 이중 For문 돌린다. visistd== false이고 x가인ㄹ때
// for문안에 벡터에 넣고 sum초기화 

// dfs안에서 현재값 sum에저장하고  상하좌우 체크후에 x가 아니면 sum에더하고 해당좌표 visited true처리후에 dfs(해당좌표))
// ["X591X",
// "X1X5X",
// "X231X", 
// "1XXX1"]

// !maps[i][j] == 'X' -> maps[i][j] != 'X'

// bfs로도 풀어보기 