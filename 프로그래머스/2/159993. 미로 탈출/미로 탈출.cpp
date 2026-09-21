#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<string> maps) {
    int answer = 0;
    vector<int> start_v;
    vector<int> start_l;
    
    for(int i=0; i<maps.size(); i++){
        for(int j=0; j<maps[0].size(); j++){
            if(maps[i][j] == 'S'){
                start_v.push_back(j);
                start_v.push_back(i);
            }
        }
    }
    
    vector<int> dx = {0,0,-1,1};
    vector<int> dy = {1,-1,0,0};
    
    vector<vector<bool>> s_visited(maps.size(), vector<bool>(maps[0].size(), false));
    vector<vector<bool>> e_visited(maps.size(), vector<bool>(maps[0].size(), false));
    
    int start_count = 0;
    int end_count = 0;
    queue<vector<int>> q;
    q.push({start_v[0], start_v[1], start_count});
    s_visited[start_v[1]][start_v[0]] = true;
    while(!q.empty()){
        vector<int> front = q.front();
        q.pop();
        
        if(maps[front[1]][front[0]] == 'L'){
            start_l.push_back(front[0]);
            start_l.push_back(front[1]);
            start_l.push_back(front[2]);
            break;
        }
        
        for(int i=0; i<4; i++){
            int nx = front[0] + dx[i];
            int ny = front[1] + dy[i];
            if(0<=nx && nx < maps[0].size() && 0<= ny && ny <maps.size() && s_visited[ny][nx] ==false && maps[ny][nx] != 'X'){
                s_visited[ny][nx] = true;
                q.push({nx,ny,front[2] +1});
            }
        }
    }
    
//     if( !start_l.empty()){
//     cout << "start_l[0]" << start_l[0] << endl;
//     cout << "start_l[1]" << start_l[1] << endl;
//     cout << "start_l[2]" << start_l[2] <<endl;
//     }
    

    if(start_l.empty()){
        return -1;
    }
    start_count = start_l[2];
    vector<int> end_v;
    queue<vector<int>> q2;
    q2.push({start_l[0], start_l[1], end_count});
    
    
    e_visited[start_l[1]][start_l[0]] = true;
    
    while(!q2.empty()){
        vector<int> front = q2.front();
        q2.pop();
        
        if(maps[front[1]][front[0]] == 'E'){
            end_v.push_back(front[0]);
            end_v.push_back(front[1]);
            end_v.push_back(front[2]);
            break;
        }
        
        for(int i=0; i<4; i++){
            int nx = front[0] + dx[i];
            int ny = front[1] + dy[i];
            if(0<=nx && nx < maps[0].size() && 0<= ny && ny <maps.size() && e_visited[ny][nx] ==false && maps[ny][nx] != 'X'){
                e_visited[ny][nx] = true;
                q2.push({nx,ny,front[2] +1});
            }
        }
    }
    
    if(end_v.empty()){
        return -1;
    }
    end_count = end_v[2];
    
    answer = start_count + end_count;
    
    return answer;
}


// 시작 -레버, 레버->출구 bfs2개


// S좌표 찾기, dx, dy선언, 
// 1. 현재 시작 좌표 큐에 넣기, 시작 방문 좌표 s_visited생성
// 2. 큐가 존재할때까지 while
//      - front확인
//      - pop   
//      - 만약 현재 좌표가 레버라면 저장후 break
//      - for문 동서남북 -> 다음좌표가 맵안벗어나고 방문안했고 X가 아니라면 
//          - q(x,y,count)


// 위와 동일하게 레버좌표 알아서 bfs후 두개더함