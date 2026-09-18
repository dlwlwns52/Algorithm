#include <string>
#include <vector>
#include <iostream>

using namespace std;
void dfs(int node, vector<bool>& visited, vector<vector<int>>& computers){
    visited[node] = true;
     for(int k=0; k<computers.size(); k++){
         if(visited[k] ==false && computers[node][k] == 1){
  
             dfs(k,visited, computers);
         }
     }
}


int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    vector<bool> visited(computers.size(), false);
    
    for(int i=0; i<computers.size(); i++){
        if (visited[i] == false){
            answer+=1;
            dfs(i, visited, computers);
        }   
    }
    return answer;
}


// 컴퓨터 개수대로 for문 - visited false인경우 dfs 실행 및 count +1
// dfs (i, &visited, &computers)
//  - 현재 방문처리
//  - for문 컴퓨터 개수대로 computers[i][k]
// - 만약 현재 방문하지 않았고 1인경우  dfs(k)