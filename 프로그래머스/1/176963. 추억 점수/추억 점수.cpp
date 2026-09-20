#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    map<string,int> m;
    for (int i=0; i<name.size(); i++){
        m[name[i]] = yearning[i];
    }
    
    for (int i=0; i<photo.size(); i++){
        int score =0;
        for(int j=0; j<photo[i].size(); j++){
            if(m.find(photo[i][j]) != m.end()){
                score += m[photo[i][j]];
            }
            
        }
        answer.push_back(score);
    }
    
    return answer;
}

// 1. 맵으로 이름과 점수 매칭
// 2. for문 photo 행길이
//      - 스코어 점수 0
//      - for문 photo 열길이
//          - if(맵에 들어간 이름이면)
//              - score += 벨류
//      -answer에 score넣기


// 맵은 기본적으로 여러값 저장 가능한가 ? 그러면 맵안에 벡터넣는거는 복사할때만 벡터로하고 원래는 pair도안쓰고 map<타입,타입?인가
// 맵에서 키만 어떻게 뽖지
// find하려면 알고리즘 include해ㅐㅑㅇ하나
// 맵.find는 안되나