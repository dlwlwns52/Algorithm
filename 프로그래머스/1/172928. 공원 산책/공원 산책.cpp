#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
   
    int row = park.size();
    int col = park[0].size();
    vector<int> cur;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(park[i][j] == 'S'){
                cur.push_back(i);
                cur.push_back(j);
            }
        }
    }

    for(string route : routes){
        bool possible = true;
        vector<int> temp = cur;
        for(int i=0; i<route[2]-'0'; i++){
            if(route[0] == 'E'){
                temp[1] = temp[1]+1;
                if(temp[1] == park[0].size() || park[temp[0]][temp[1]] == 'X'){
                    possible = false;
                    break;
                } 
                // cout << temp[1] <<endl;
            }
        
            if(route[0] == 'W'){
                temp[1] = temp[1]-1;
                if(temp[1] < 0 || park[temp[0]][temp[1]] == 'X'){
                    possible = false;
                    break;
                } 
            }
            
            if(route[0] == 'N'){
                temp[0] = temp[0]-1;
                if(temp[0] < 0 || park[temp[0]][temp[1]] == 'X'){
                    possible = false;
                    break;
                } 
            }
            
            if(route[0] == 'S'){
                temp[0] = temp[0]+1;
                if(temp[0] == park.size() || park[temp[0]][temp[1]] == 'X'){
                    possible = false;
                    break;
                } 
            }
        }
        if(possible){
            cur = temp;
        }
        
    }
    
    return cur;
}

// 장애물이 있으면 안된다. 벗어나면 안된다.
// "SOO",
// "OXX",
// "OOO"]
//  어떻게 
// 1. parks의 행, 열길이 변수에 저장,  현재좌표 = 출발 지점 저장  , 
// 2. for route길이만큼 진행
    // - //  - 가능한지 bool값 설정 
//         - 임시좌표값 넣음
// 3. for 거리만큼 for문진행 
//   - 만약 더한값이 X거나 벗어나면 break / 아니라면 bool값 True
//  - true 라면 현재좌표수정

// 6.  현재좌표 반환