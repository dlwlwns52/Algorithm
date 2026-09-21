#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = 0;
    string total, temp;
    vector<string> sv = {"zero","one", "two", "three", "four","five","six","seven","eight","nine"};
    vector<int> si = {0,1,2,3,4,5,6,7,8,9};
    
    for(char c : s){
        if(find(si.begin(), si.end(), c-'0') == si.end()){
            temp += c;
            if(find(sv.begin(), sv.end(), temp) != sv.end()){
                int iv = find(sv.begin(), sv.end(), temp) - sv.begin();
                total += to_string(si[iv]);
                temp = ""; // 초기화 이렇게하는게 맞나
            }
        } else{
            total += c;
        }
    }
    answer = stoi(total);
    
    return answer;
}



// 맵 -> 키숫자, 영단어벨류
// string total, string temp
// 벡터 : 문자열벡터 숫자벡터
// for 문 s길이만큼
//  - 만약 지금 있는 값이 숫자벡터에 없는거라면
//      - 지금값 temp += 's'
//      -  만약 temp가 문자열 벡터에있다면
//      - 인덱스 가져와서 숫자인덱스에 대입해서 값가져와서 문자로 total+=
//  - 그냥 숫자 문자로 total +=