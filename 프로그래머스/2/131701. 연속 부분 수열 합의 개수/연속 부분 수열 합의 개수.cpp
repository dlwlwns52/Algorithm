#include <string>
#include <vector>
#include <set>
#include <iostream>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    vector<int> v;
    for(int i=0; i<2; i++){
        for(int j=0; j<elements.size(); j++){
            v.push_back(elements[j]);
        }
    }
    set<int> st;
    vector<int> prefix(v.size()+1, 0);
    for(int i=0; i<v.size(); i++){
        prefix[i+1] = v[i] + prefix[i];
    }
    
    for (auto i : prefix){
        cout << i << endl;
    }
    
    for(int i=0; i<elements.size(); i++){
        for(int j=1; j<elements.size()+1; j++){
            st.insert(prefix[i+j+1] - prefix[j]);
        }
    }
    answer= st.size();
    return answer;
    
}



// 정답 set, 누적합

// 1. elements 길이 *2 배열 생성
// 2. perfix(배열길이 +1 , 0) 생성
// 3.for문 elements길이만큼
// 4.   for문 elements길이만큼
// 5.       - prefix(j+i+1) - prefix(i) 값 set에 넣기
// 6. set값반환