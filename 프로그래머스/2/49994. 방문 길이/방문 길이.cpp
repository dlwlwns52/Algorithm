#include <string>
#include <vector>
#include <set>
#include <iostream>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    set<vector<int>> st;
    int x = 0;
    int y = 0;
    for(char dir : dirs){
        if(dir == 'U'){
            int ny = y+1;
            if(ny <=5){
                st.insert({x,y,ny,x});
                st.insert({x,ny,y,x});
                y=ny;
            } else{
                continue;
            }
        } else if(dir =='D'){
            int ny = y-1;
            if(-5<=ny){
                st.insert({x,y,ny,x});
                st.insert({x,ny,y,x});
                y = ny;
            }else{
                continue;
            }
        } else if(dir == 'R'){
            int nx = x+1;
            if(nx <= 5){
                st.insert({nx,y,y,x});
                st.insert({x,y,y,nx});
                x = nx;
            }else{
                continue;
            }
        } else{
            int nx = x-1;
            if(-5<=nx){
                st.insert({nx,y,y,x});
                st.insert({x,y,y,nx});
                x = nx;
            }else{
                continue;
            } 
        }    
    }

    answer = st.size()/2;
    return answer;
}

// {0,0,-1,0} {-1,0,0,0}
// 정답 set<vector<int>> 로넣고 양방향넣자 ,-5<=x<=5 -5<=y<=5
// 1. for문 dirs길이만큼
// 2. UDRL 분기처리  
// 3. 만약 -5<=nx<=5 -5<=ny<=5이라면
//    set에 {출발점, 도착점}{도착점,출발점}
//      x=nx y=ny

// 4. set길이 반환/2