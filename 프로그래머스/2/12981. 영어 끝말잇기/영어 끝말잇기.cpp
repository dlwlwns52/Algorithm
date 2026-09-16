#include <string>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    set<string> st;
    bool isPass = false;
    for(int i=0; i<words.size(); i++){
        if(st.count(words[i]) != 0){
            answer.push_back(i%n+1);
            answer.push_back(i/n+1);
            isPass = true;
            break;
        }
        
        if(i > 0 && words[i-1].back() != words[i].front()){
            answer.push_back(i%n+1);
            answer.push_back(i/n+1);
            isPass = true;
            break;
        }
        
        st.insert(words[i]);
    }
    
    if(!isPass){
        return {0,0};
    }

    return answer;
}


// 1. set에 존재할때
// 2. 끝에가 같을때