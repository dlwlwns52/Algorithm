#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    int cnt = 0;
    for(char& c : s){
        if (c == ' '){
            cnt = 0;
            continue;
        }
        
        if(cnt % 2 == 0){
            if (islower(c)){
                c = int(c)-32;
            }
        } else{
            if (isupper(c)){
               c = int(c)+32;
            }
        }
        cnt += 1;
    }
    return s;
}


// 1. 소문자 - 대문자 차이 : 32
// 2. s길이대로 for문 / cnt=0 넣어서 %2==0 인경우 대문자 설정 / 공백일 경우 cnt초기화