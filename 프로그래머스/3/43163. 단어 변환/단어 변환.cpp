#include <string>
#include <vector>
#include <queue>
#include<algorithm>
#include<iostream>
using namespace std;

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    vector<bool> visited (words.size(), false);
     // queue<vector<pair<string, int>>> q; //pair에는 넣는법 뺀는법 이런건 딱히없나? 만약 세개가 다른타입이면 벡터에어떻게넣나?
    queue<vector<string>> q; //pair에는 넣는법 뺀는법 이런건 딱히없나? 만약 세개가 다른타입이면 벡터에어떻게넣나?
    q.push({begin, "0"});
    if(find(words.begin(), words.end(), target) == words.end()){
        return answer;
    }


    while(!q.empty()){
        auto front = q.front();
        q.pop();
        if(front[0] == target){
            answer = stoi(front[1]);
            break;
        }
        
        for(int i=0; i<words.size(); i++){
            if(visited[i] == false){
                int count = 0;
                for(int j=0; j<front[0].size(); j++){
                    if(front[0][j] == words[i][j]){
                        count+=1;
                    }
                }
                
                  if(count == begin.size()-1){
                    char count_c = front[1][0];
                    int count = count_c - '0';
                    count +=1;
                    q.push({words[i], to_string(count)});
                    visited[i] = true;
                }
                
            }
        }
        
    }
    
    
    return answer;
}

// 가장 짧은 / 순서 x / 

// 0. 큐선언큐(단어, 카운트) / visited -words길이만큼/ 
// 1. 큐생성 및 beigin, 0값 넣음, 큐push
// 2.words에 타겟이 없다면 0반환
// 3. while(큐존재)
//      - front 값확인
//      -큐뺀다 -> 만약 큐 값이 target라면 answer = 카운트 break
//      -  words길이만큼 for문
//      - 방문하지 않았고 두개가 같다면
//     -큐(새로운값, count+1) 푸시
//          - 방문 true