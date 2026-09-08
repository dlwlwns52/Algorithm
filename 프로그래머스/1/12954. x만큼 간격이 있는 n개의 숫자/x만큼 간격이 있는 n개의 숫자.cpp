#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    for(int i = 0; i < n; i++){
        answer.push_back(x * (i+1));
    }
    
    return answer;
}


// 1. for문 n만큼 반복
// 2. x에 (1+i)곱해서 push_back()