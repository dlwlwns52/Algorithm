#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <queue>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<string,int> m;
    queue<char> q;
    
    for(int i=0; i<s.size(); i++){
        q.push(s[i]);
    }
    
    string temp;
    set<string> st;
    while(!q.empty()){
        if(isdigit(q.front())){
            temp+=q.front();
        } else{
            if (temp != ""){
                m[temp] +=1;
            }
            temp="";
        }
        q.pop();
    }
    
    
    vector<pair<string,int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](auto a, auto b){
        return a.second > b.second;
    });
    
    for(auto a : v){
        answer.push_back(stoi(a.first));
    }

    return answer;
}

// /solution0.cpp:9:5: error: no template named 'unordered_map'
    // 9 |     unordered_map<char,int> m;
// 중복x

// 길이별로 정렬

// 맵- 횟수
// is digit일때 +1
// 벡터로 바꿔서 벨류기준 내림차순반환