#include<string>
#include <iostream>
#include<stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack<char> st;
    for(char c : s){
        if(c == '('){
            st.push(c);
        } else{
            if(!st.empty() && st.top() == '('){
                st.pop();
            } else{
                return false;
            }
        }
    }
    
    if(!st.empty()){
        return false;
    }
    return answer;
}



// 1. stack선언 및 생성
// 2. s길이만큼 for문
//      - ( 인경우에는 넣는다
//      -  그외 경우 스택이 비어있지않고 top이 (이거면 pop 아닌경우 return false
// 3. 비어있지 않다면 False
// 4. True반환
