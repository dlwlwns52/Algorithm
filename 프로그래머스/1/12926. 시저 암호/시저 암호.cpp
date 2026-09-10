#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char& c : s){
        if (islower(c)){
            c = 'a'+ (c-'a'+n)%26;
            
        } else if(isupper(c)){
             c = 'A'+ (c-'A'+n)%26;
        } 
    }
    return s;
}

// 1. 아스키 코드로 접근? 소문자 대문자 26개
// a:97 z: 122 / A:65 Z:90 
// for문 해서 대소문자 판별후에 해당 char아스키로 변환하고 더한값이 넘으면 그차만큼 초기값에더하기
