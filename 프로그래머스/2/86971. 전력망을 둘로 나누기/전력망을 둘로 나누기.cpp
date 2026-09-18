#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
int dfs(int node, vector<int>& cut_nodes, vector<bool> visited, vector<vector<int>>&  graph){
    int count = 1;
    visited[node] = true;
    
    for(int next : graph[node]){
        if((next == cut_nodes[0] && node == cut_nodes[1]) || (next == cut_nodes[1] && node == cut_nodes[0])){
            continue;
        }
        if(!visited[next]){
            count += dfs(next, cut_nodes, visited, graph);
        }
    }
    return count;
}

int solution(int n, vector<vector<int>> wires) {
    int answer = -1;
    vector<vector<int>> graph(n+1);
    vector<int> node_count;
    
    for(vector<int> wire : wires){
        graph[wire[0]].push_back(wire[1]);
        graph[wire[1]].push_back(wire[0]);
    }
    
    for(vector<int> wire :wires){
        int count_a = 0;
        vector<bool> visited(n+1,false);
        count_a = dfs(wire[0], wire, visited, graph);
        int count_b = abs(n-count_a);
        node_count.push_back(abs(count_a-count_b));
    }
    

    
    answer = *min_element(node_count.begin(), node_count.end());
    
    return answer;
}


// #include <cmath>
// vector<vector<int>> graph(n+1) 으로 인접리스트 뼈대 생성
// wires for문,  인접리스트 값 넣기  

// wires길이만큼 for문  - i
//   -count_a = 0 , visited 는 n+1만큼
//   - int dfs(현재 노드[0], 첫번재점두번재점  ,visited, 그래프)
//     - int count=1;
//      - visited[노드] = true
//      -  그래프 for문 - graph[노드] - next
//      - 만약 
//             next node가  첫번재 두번째와 같거나 두번째 첫번째점과 같다면 컨티뉴
//      -  만약 방문하지 않았다면
//      -  count += dfs
//     
//  count_a 반환

// count_b =  abs(count_a - n)
// 두개 차 벡터에 넣음 ->오름차순에서 첫번째거 출력
 
// 1-3
// 2-3
// 3-1, 2,4