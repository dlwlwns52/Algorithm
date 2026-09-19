#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i=0; i<score.size()+!1; i++){
        if(!pq.empty() && pq.size() >= k){
            if(pq.top() < score[i]){
                pq.pop();
                pq.push(score[i]);
                answer.push_back(pq.top());
            } else{
                answer.push_back(pq.top());
            }
        }else{
            pq.push(score[i]);
            answer.push_back(pq.top());
        }
    }

    return answer;

}
    
//  최하위점수반환
//  가수의 점수 score
    
// k까지는 값을 넣고 최솟값만 뺀다.
//  k이후부터는 최솟값을 빼고 과 새로운값을 비교하고 새로운값이 더 크면 넣고 최솟값을 뺀다.
    
    
// 우선순위 큐 생성 오름차순으로
// 1. score길이대로 for문
// 2. 만약 큐 길이가 >= k 
//     - 최솟값 확인top()하고 score가 더크다면 pop()후에 score push , 해당 큐에서 top값 anwer에넣기
// 3. 아니라면
//     -큐에 넣고 해당 큐에서 top값 anwer에넣기
    