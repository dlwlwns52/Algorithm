#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    for(int i=0; i<park.size(); i++){
        for(int j=0; j<park[0].size(); j++){
            if(park[i][j] == 'S'){
                answer.push_back(i);
                answer.push_back(j);
            }
        }
    }
    
    
    vector<int> temp;
    for(int i=0; i<routes.size(); i++){
        temp = answer;
        bool isVaild = true;
        int route_count = routes[i][2]-'0';
        for(int j=0; j<route_count; j++){
            if(routes[i][0] == 'E'){
                if(0 <= temp[1]+1 && temp[1]+1 < park[0].size() && park[temp[0]][temp[1]+1] != 'X'){
                    temp[1] = temp[1]+1;
                }else{
                    isVaild = false;
                    break;
                }
            }
            
            if(routes[i][0] == 'W'){
                if(0 <= temp[1]-1 && temp[1]-1 < park[0].size() && park[temp[0]][temp[1]-1] != 'X'){
                    temp[1] = temp[1]-1;
                }else{
                    isVaild = false;
                    break;
                }
            }
            if(routes[i][0] == 'N'){
                if(0 <= temp[0]-1 && temp[0]-1 < park.size() && park[temp[0]-1][temp[1]] != 'X'){
                    temp[0] = temp[0]-1;
                }else{
                    isVaild = false;
                    break;
                }
                
            }
            if(routes[i][0] == 'S'){    
                if(0 <= temp[0]+1 && temp[0]+1 < park.size() && park[temp[0]+1][temp[1]] != 'X'){
                    temp[0] = temp[0]+1;
                }else{
                    isVaild = false;
                    break;
                }
                
            }
        }
        
        if(isVaild){
            answer = temp;
        }
    }
    
    return answer;
}


// S위치 구하기
// 현재 위치 벡터에 S넣음(answer로 사용?), 임시값 저장 벡터
// routes 길이만큼 for문 진행
// 임시벡터에 현재위치벡터 넣음
// 정상종료 bool변수
// 각각 방향에 맞게 routes[2] 길이만큼 for문
// // 동서남북 체크
// 만약 Park를 벗어지 않고 X도 아닌경우 break 및 정상종료 false
// true시 현재 위치에 임시 벡터값  저장
