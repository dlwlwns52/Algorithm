#include <string>
#include <vector>
#include <iostream>

using namespace std;


vector<bool> visited;
int total = 0;

void dfs(int n, vector<vector<int>> computers){
    for(int i=0; i<total; i++){
        if(n == i){
            continue;
        }else{
            if(computers[n][i] == 1 && visited[i] == false){
                visited[i] =true;
                dfs(i, computers);
            }
        }
    } 
}

// dfs로 파고들어간다 -> 현재 행에서 자기자신말ㄹ고 1인경우를 true설정하기 위한 dfs값
// - dfs함수 매개변수 : 파고들어갈 값 초기 0 
// - 행단위 for문 본인 자기값 말고 1인경우 dfs() -> true설정
// - 
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    total = n;
    for(int i=0; i<n; i++){
        visited.push_back(false);
    }
    
    for(int i=0; i<n; i++){
        if(visited[i] == false){
            dfs(i, computers);
            answer +=1;
        }
        
    }
    return answer;
}


// n개수대로 bool값 벡터 생성
// 이미 방문했으면 넘어가고 방문 안했으면 
// dfs 로 1번부터 검사해서 다 true설정  -> 현재값이 false인 경우에만 cnt +1  못해 아무것도 


