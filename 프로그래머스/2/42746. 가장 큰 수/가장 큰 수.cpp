#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b){
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> s;
    for (int i=0; i<numbers.size(); i++){
        s.push_back(to_string(numbers[i]));
    }
    sort(s.begin(), s.end(), cmp);
    
    for (int i=0; i<numbers.size(); i++){
        answer+=s[i];
    }
    
    if (answer[0] == '0'){
        return "0";
    }
    return answer;
}





// 1. 정수형 배열 -> 문자열 배열
//  2. 문자열 비교 함수 생성 - sort세번째인자
// 3. sort
// 4. 문자열합치기