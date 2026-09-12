#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> qp;
    priority_queue<int> pq;
    
    for(int i=0; i<priorities.size(); i++){
        qp.push({i, priorities[i]});
        pq.push(priorities[i]);
    }
    
    
    while(!qp.empty()){
        auto it = qp.front();
        qp.pop();
        if(pq.top() != priorities[location]){ 
            if(it.second == pq.top()){ 
                pq.pop();
                answer +=1;
            }else{
                qp.push(it);
            }           
        }else{
            if(pq.top() > it.second){
                qp.push(it);
            } else{
                answer+=1;
                if(it.first == location){
                    break;
                }
            }
            
        }
    } 
        
        
        
    return answer;
}



//  while 큐가 빌때까지
// 만약 pq.top() 이 큐로케이션 값과 다르다 -> pq.top()이 앞에올때 큐에서 pop 및 priority큐에서도 제거
// 같다면 first location값이 front에 올대까지 반복