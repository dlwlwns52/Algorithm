#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<char> st;
    for(char c: s){
        if (c == '('){
            st.push(c);
        } else{
            if(!st.empty() && st.top() == '('){
                st.pop();
            } else{
                return false;
            }
        }
    }
    
    if(st.empty()){
        return answer;
    }
    return false;
}


// stack 사용
// 1. #include <stack> / stack<char> st; 선언
// 2. s 길이만큼 for문 (char c : s)
//  - '(' 인 경우에는 st에 push
//  - ')' 인 경우에는 st.top() == '(' 인 경우에 pop() 아닌경우 바로 false리턴
// 3. 만약 stack이 비어있다면 true 그렇지않다면 false