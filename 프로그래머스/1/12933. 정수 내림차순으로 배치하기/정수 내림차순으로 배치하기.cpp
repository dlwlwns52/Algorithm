#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    sort(s.begin(), s.end(), greater<char>());
    
    answer = stol(s);
    return answer;
}



// 1. 정수 -> 문자열
// 2. 문자열 정렬
// 3. 반환 또는 정수형으로 변환 후 반환