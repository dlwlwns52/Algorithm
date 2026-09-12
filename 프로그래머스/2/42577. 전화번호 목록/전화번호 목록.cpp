#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    unordered_map<string, int> m;
    
    for (string s : phone_book){
        m[s] = 0;
    }
    
    for(string s : phone_book){
        string prefix;
        for(int i=0; i<s.size()-1; i++){
            prefix += s[i];
            if(m.find(prefix) != m.end()){
                return false;
            }
        }
    }
    
    return answer;
}


// 1.맵에 다넣기 -> phone_book for 문 안에 -> s길이-1만큼 for문하고 map에 존재하면 반환
// 2.정렬 -> 사전순 -> for -1만큼해서 앞에값하고 비교했는데 앞에 길이만큼 substr로 일치하면 반환false