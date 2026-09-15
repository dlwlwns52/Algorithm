#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<bool> visited;
void dfs(int i, vector<vector<int>> computers){
    visited[i] = true;
    
    for(int k=0; k< computers[0].size(); k++){
        if(computers[i][k] == 1 && visited[k] == false){
            dfs(k,computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i=0; i<computers[0].size(); i++){
        visited.push_back(false);
    }

    for(int i=0; i<computers[0].size(); i++){
        if(visited[i] == false){
            dfs(i, computers);
            answer+=1;
        }
        
    }
    
    return answer;
}


// dfs
// visited = 컴퓨터한행의길이
// for문 visited== fasle라면 dfs  cnt+1
// dfs에서는 우선 현재값 true 설정 다음값이 1이면 computers[i][0] -> for문 computers사이즈만큼

//  dfs에서는cur값 computers

// [[1, 1, 0], 
// [1, 1, 0], 
// [0, 0, 1]]