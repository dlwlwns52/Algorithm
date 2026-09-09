#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> one = {1,2,3,4,5};
    vector<int> two = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> three = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int cnt1 =0;
    int cnt2 =0;
    int cnt3 =0;
    

    for(int i=0; i<answers.size(); i++){
        if(answers[i] == one[i%5]){
            cnt1 +=1;
        } 
        if (answers[i] == two[i%8]){
            cout << i%8;
            cnt2 +=1;
        }
        if (answers[i] == three[i%10]){
            cnt3 +=1;
        }
    }

    
    int max_cnt = max({cnt1, cnt2, cnt3});
    if (cnt1 == max_cnt){
        answer.push_back(1);
    } 
    if (cnt2 == max_cnt){
        answer.push_back(2);
    } 
    if (cnt3 == max_cnt){
        answer.push_back(3);
    }
    
     sort(answer.begin(), answer.end());
    return answer;
}


// 1. 정답 계산 -> 3번 돌려서 answer길이만큼고 맞춘 숫자만큼 count
// 2. max구하고 max가 몇명이지 확인 -> set에 넣는다(자동 오름차순) -> 반환
// 3.