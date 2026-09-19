#include <string>
#include <vector>
#include <set>
#include <iostream>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    vector<int> delements;
    for (int i=0; i<2; i++){
        for(int j: elements){
            delements.push_back(j);
        }

    }
    
    set<int> s;
    vector<int> prefix;
    prefix.push_back(0);
    for (int i=0; i<delements.size(); i++){
        prefix.push_back(delements[i] + prefix[i]);
    }
    
    for(int i=0; i<elements.size(); i++){
        for(int j=1; j<elements.size()+1; j++){
            s.insert(prefix[i+j]-prefix[i]);
        }
    }
    
    answer = s.size();
    return answer;
}



// [7,9,1,1,4,7,9,1,1,4] - 원형벡터
// [0,7,16,17,18 ~ 합산값] - 누적값
//elements 배열 x2한 배열 생성, 합산 내용 넣을 set구성
// 누적합 계산, 0값 초기화 후에 값넣기
// for문 기존 원소 개수만큼 -> 원소 다 돌아야되니깐
    // -,기존원소+1만큼 for문 - j -> 1부터개수니깐
        // -.set.insert(prefix[i+j]-prefix[i])

// return set길이