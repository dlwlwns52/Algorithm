#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<vector<string>> book_time) {
    int answer = 1;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<vector<int>> book_time_int;
    
    for(vector<string> v : book_time){
        int start = stoi(v[0].substr(0,2)) * 60 + stoi(v[0].substr(3,2));
        int end = stoi(v[1].substr(0,2)) * 60  + stoi(v[1].substr(3,2)) +10;
        book_time_int.push_back({start, end});
    }
    
    sort(book_time_int.begin(), book_time_int.end());
    
    for(int i=0; i< book_time_int.size(); i++){
        if(pq.empty()){
            pq.push(book_time_int[i][1]);
        } else{
            if(pq.top() > book_time_int[i][0]){
                pq.push(book_time_int[i][1]);
                answer +=1;
            } else{
                pq.pop();
                pq.push(book_time_int[i][1]);
            }
        }
    }
    
    
    return answer;
}


// -우선순위 큐생성(오름차순) , 
// 1.벡터하나 생성 book time 시간+분 형태로 int형으로 저장
// 2.book time을 시작시간 순으로 정렬
// 3.booktime길이대로 for문
//  - 만약 큐가 비어있다면 현재 값 넣기(대실 종료 시각))
//  - 큐가 존재한다면
//      - 만약 현재 top > 시작시간
//           -  q.push(종료시각 +10) , count +1
//      - 만약 현재 top이 <= 시작시간
//          -  q.pop(), .q.push(종료시각 +10)

// count 반환