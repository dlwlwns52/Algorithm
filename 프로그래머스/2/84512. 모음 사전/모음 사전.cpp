#include <string>
#include <vector>
#include <iostream>
using namespace std;



int answer = 0;
vector<char> v = {'A', 'E', 'I', 'O', 'U'};
int cnt = 0;
string target;

void dfs(string current){
    if(current.size() == 5){
        return;
    }
    
    for(char c: v){
        string next = current + c;
        cnt +=1;
        
        if(next == target){
            answer = cnt;
            return;
        }
        
        dfs(next);
        
        // if(answer != 0){
        //     return;
        // }
    }
}
    

int solution(string word) {
    target = word;
    dfs("");
    return answer;
}


// dfs -> 만약 사이즈가 5면 반환 / for (char c : v) { current += c 하고 카운트 +1 하고 만약 target하고 같으면 반환 dfs() }  