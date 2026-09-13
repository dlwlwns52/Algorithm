#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    unordered_map<string, string> m;
    
    // 최종 닉네임 찾기 -> Enter, Change 경우만
    for(string s : record){
        int first = s.find(' ');
        int second = s.find(' ', first+1);
        string id = s.substr(first+1, second-first-1);
        string nickname = s.substr(second+1);
        
        if(s.find("Enter") != string::npos || s.find("Change") != string::npos){
            m[id] = nickname;
            
        }
    }
    
    //최종닉네임으로 로그남기기
    for(string s : record){
        int first = s.find(' ');
        int second = s.find(' ', first+1);
        string id = s.substr(first+1, second-first-1);
        
        if(s.find("Enter") != string::npos) {
             answer.push_back(m[id]+"님이 들어왔습니다.");
         }
        if(s.find("Leave") != string::npos) {
            answer.push_back(m[id]+"님이 나갔습니다.");
        }
     }
    
    return answer;
}



// 결국 마지막에 이름이 뭐냐에 따라서 갈린다.
// 맵 키(id) : 벨류(nickname)

//  1. record길이만큼 id별로 최종 닉네임For문으로 탐색
// 2.record 길이만큼 최종닉네임으로 log남기기 -> Enter, Leave경우에만