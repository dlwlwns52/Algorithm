#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    int len = s.size();
    cout << len;
    string answer = "";
    
    if (len % 2 == 0){
        answer = string(1,s[(len/2)-1]) + string(1,s[len/2]);
    } else {
        answer = s[len/2];
    }
    return answer;
}