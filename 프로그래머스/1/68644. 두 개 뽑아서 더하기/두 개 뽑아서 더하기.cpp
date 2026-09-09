#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> s;
    
    for(int i = 0; i< numbers.size()-1; i++){
        for(int k = i+1; k< numbers.size(); k++){
            s.insert(numbers[i] + numbers[k]);
        }
    }
    
    answer.assign(s.begin(), s.end());
    return answer;
}



// 이중 for문 후 값 더한 것들 set에 넣기
// set -> vector변환 