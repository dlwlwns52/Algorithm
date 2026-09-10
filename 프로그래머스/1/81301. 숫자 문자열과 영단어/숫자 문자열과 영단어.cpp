#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(string s) {
    int answer = 0;
    string toint;
    string temp;
    vector<string> voka = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    for (char c : s){
      
        if (isdigit(c)){
            temp += c;
            continue;
        }
        toint += c;
        if (find(voka.begin(), voka.end(), toint) != voka.end()) {
            auto it = find(voka.begin(), voka.end(), toint);
            int index = it - voka.begin();
            temp += to_string(index);
            toint = "";
        }
    }
    // cout << temp;
    answer = stoi(temp);
    return answer;
}


// 1. 2개의 벡터 사용? 숫자, 영단어 보관용 -> map은 현재 미사용 /
// 2. 하나 문자열 합칠때마다 비교?  



// 벡터에서 인덱스를 어떻게뽑지? find -> it - begin() / find쓸거면 필수
// '3'이게 숫자다 라는걸 어덯게 알지? -> 지금은 아스키로가자 => 아스키'2' 가 50이다.. -> isdigit()
// '3'을 실제 숫자 3으로 바꾸려면 : c - '0'
// 벡터에서 if(find) 가능하나