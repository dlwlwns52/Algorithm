#include <string>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;


int dfs(int node, vector<int> wire, vector<vector<int>>& graph, vector<bool>& visited){
    int count = 1;
    for(int i: graph[node]){
        if(visited[i] != false){
            continue;
        }
        if((node == wire[0] && i == wire[1] )||(node == wire[1] && i == wire[0])){
            continue;
        }
        visited[i] = true;
        count += dfs(i, wire, graph, visited);
    }
    return count;
}


int solution(int n, vector<vector<int>> wires) {
    int answer = -1;
    // 그래프만들기
    vector<vector<int>> graph(n+1);
    
    for(int i=0; i<wires.size(); i++){
        graph[wires[i][0]].push_back(wires[i][1]);
        graph[wires[i][1]].push_back(wires[i][0]);
    }

    // priority_queue 
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i=0; i<wires.size(); i++){
        // visited
        vector<bool> visited(n+1, false);
        visited[wires[i][0]] = true;
        int count_a = dfs(wires[i][0], wires[i], graph, visited);
        int count_b = abs(n-count_a);
        int total = abs(count_a-count_b);
        pq.push(total);
        
    }
    answer = pq.top();
    return answer;
}


// 인접리스트 만들기 - 그래프 / visited 만들기 n개수대로/ prirority_queue 최소힙
// 1. wires 개수대로 for문
//  - int dfs(구해올 노드, 첫번째 노드두번째 노드 벡터, 그래프, visited)
//  - count_a 값으로 구해올 노드 값 받기


//  - dfs
//  - 현재 노드 개수 count =1


//  - 그래프[현재노드] for문해서
//  
// - 방문한적이 없다면
// - 구해올노드 ==첫번째노드, 그래프[노드] == 두번째노드 or  구해올노드 ==두번째노드, 그래프[노드] == 첫번째노드 라면 continue
//  - count = dfs()
// - 방문처리
// - 마지막에 count반환 

// 2. 받아왔으면 abs(n-count_a)로 두번째 노드값 구하기
// 3. 차를 prirority_queue에 넣음
// 4. 다했으면 미니힙 top확인