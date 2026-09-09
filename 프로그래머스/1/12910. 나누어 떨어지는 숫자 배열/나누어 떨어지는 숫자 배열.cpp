#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(int i : arr){
        if (i % divisor == 0){
            answer.push_back(i);
        }
    }
    
    if (answer.empty()){
        answer.push_back(-1);
        return answer;
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}


// 1. 나머지가 0면 나누어 떨어지는것
// 2. arr길이만큼 for문 후 divsior로 나머지구하는데 0이면 push_back / empty경우 -1 Pushback