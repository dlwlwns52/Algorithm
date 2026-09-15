#include <string>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int solution(vector<string> maps) {
    int answer = 0;

    int sx = 0;
    int sy = 0;
    for(int i=0; i< maps.size(); i++){
        if(maps[i].find("S") != string::npos){
            sx = maps[i].find("S");
            sy = i;
            break;
        }
    }
    
    queue<vector<int>> sq;
    sq.push({sx,sy,0});
    vector<vector<int>> sv(maps.size(), vector<int>(maps[0].size(), false));
    sv[sy][sx] = true;

    vector<int> dx = {0,0,-1,1};
    vector<int> dy = {1,-1,0,0};
    
    int lx = -1;
    int ly = -1;
    
    bool start = false;
    while(!sq.empty()){
        vector<int> cur = sq.front();
        sq.pop();
        
        if(maps[cur[1]][cur[0]] == 'L'){
            lx = cur[0];
            ly = cur[1];
            answer += cur[2];
            start = true;
            break;
        }
        
        
        for(int i = 0; i<4; i++){
            int nx = cur[0] + dx[i];
            int ny = cur[1] + dy[i];
            
            if(0 <= nx && nx < maps[0].size() && 0<= ny && ny< maps.size() && sv[ny][nx] == false && (maps[ny][nx] != 'X')){
                sv[ny][nx] = true;
                int cnt = cur[2] +1;
                sq.push({nx, ny, cnt});
            }
        }
        
    }
    
    if(!start){
        return -1;
    }

    queue<vector<int>> eq;
    eq.push({lx,ly,0});
    vector<vector<int>> ev(maps.size(), vector<int>(maps[0].size(), false));
    ev[ly][lx] = true;
    
    bool lever = false;
    
    while(!eq.empty()){
        vector<int> cur = eq.front();
        eq.pop();
        
        if(maps[cur[1]][cur[0]] == 'E'){
            answer += cur[2];
            lever = true;
            break;
        }
        
        
        for(int i = 0; i<4; i++){
            int nx = cur[0] + dx[i];
            int ny = cur[1] + dy[i];
            
            if(0 <= nx && nx < maps[0].size() && 0<= ny && ny< maps.size() && ev[ny][nx] == false && (maps[ny][nx] != 'X')){
                ev[ny][nx] = true;
                int cnt = cur[2] +1;
                eq.push({nx, ny, cnt});
            }
        }
        
    }
    if (!lever){
        return -1;
    }
    
    return answer;
}


//["SOOOL"
// "XXXXO",
// "OOOOO",
// "OXXXX",
// "OOOOE"]

// S의 위치 찾기
// bfs2개 사용 -> S-> L / L ->E
// 큐도 2개

// 1. S위치 찾기
// 2. L까지   bfs cnt및 좌표구하기
// 3.E까지 cnt+1