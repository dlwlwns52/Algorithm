#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(int n, vector<vector<int>> roads, vector<int> sources, int destination) {
    vector<int> answer;
    vector<int> visited(n+1, false);
    vector<vector<int>> graph(n+1); 
    for(vector<int> road : roads){
        graph[road[0]].push_back(road[1]);
        graph[road[1]].push_back(road[0]);
    }
    vector<int> dist(n+1, -1);
    
    queue<vector<int>> q;
    q.push({destination, 0});
    dist[destination] = 0;
    visited[destination] = true;
    while(!q.empty()){
        vector<int> f = q.front();
        q.pop();
        for(int i : graph[f[0]]){
            if(visited[i] == false){
                dist[i] = f[1]+1;
                visited[i] = true;
                q.push({i, f[1]+1});
            }
        }
    }
    
    for(int source : sources){
        answer.push_back(dist[source]);
    }
    
    
    return answer;
}



// 소스에 있는 각 지역이 어디에 연결되어있는지 그래프 구현 -인접리스트 / visited greph n+1개 생성 / 거리벡터생성 

// 큐에(destination, 0) push
// 초기값 거리벡터 설정
// while (큐 존재할때까지)
// 큐에서 값 빼기
// for문 현재 그래프 현재위치 값들
//  -만약 방문 안했따면
//  -거리벡터에 count+1값저장
// -방문처리
//  -큐.push(다음거, count+1)
//  

// for문 sources 해서 값들 거리[값] 넣어서 result에넣기


// 1 -2
//  2- 1,3
// 3-1