#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i : scoville){
        pq.push(i);
    }
    if(pq.top() >= K){
        return answer;
    }
    
    while(pq.size() >=2){
        int front1 = pq.top();
        pq.pop();
        int front2 = pq.top();
        pq.pop();
        pq.push(front1 + (front2*2));
        answer+=1;
        if(pq.top() >= K){
            return answer;
        }
    }
    return -1;
}

 
// 내림차순 큐 만들기
// 큐에 스코빌 넣기 for문

// while(큐 길이가 2이상일때까지)
// 만약 현재 front값이 k이상이라면 return count
// front값 저장 pop 두번째 프론트 값 저장 pop 만약
//  공식대로 해서 큐에 넣기
// 카운트 +1


// 아니라면 -1리턴
// 