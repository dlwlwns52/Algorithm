#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> truck;
    queue<int> bridge;
    int currentWeight = 0;
    int cnt = 0;
    for (int i : truck_weights){
        truck.push(i);
    }
    
    for(int i=0; i<bridge_length; i++){
        bridge.push(0);
    }
    
    
    while(currentWeight > 0 || !truck.empty()){
        cnt +=1;
        currentWeight-= bridge.front();
        bridge.pop();
   
        if(!truck.empty() && currentWeight+truck.front() <= weight){
            currentWeight += truck.front();
            bridge.push(truck.front());
            truck.pop();
        } else{
            bridge.push(0);
        }
    }
    
    answer+= cnt;
    return answer;
}


// 큐를 다리하고 트럭 두개로 설정 /  큐를 현재 길이만큼 0으로 초기화
// bridge_length만큼 큐 크기 설정
// while (트럭이 비어있거나 현재 무게가 0보다 크면) ->  if currentWeight + 트럭front > weight -> pop & 0넣기 else라면 pop후에 값넣기