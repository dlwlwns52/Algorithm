#include <string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> st;
    
    for (char c : s){
        if (c == '('){
            st.push(c);
        } else if(c == ')'){
            if (st.empty() || st.top() == ')'){
                return false;
            }
            st.pop();
        }
    }

    if (!st.empty()){
        return false;
    }
    return answer;
}



// stack 만들기 -> s길이대로 for문 -> "(" 인경우 넣기  / ")"인경우는 pop ->근데 비어있거나 "(" 이거면 return false