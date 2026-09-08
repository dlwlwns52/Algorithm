#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    int size = s.size() / 2;
    string answer = "";
    
    if (s.size() % 2 == 0){
        answer = s.substr(size-1, 2);
    } else{
        answer =s.substr(size, 1);
    }
    return answer;
}