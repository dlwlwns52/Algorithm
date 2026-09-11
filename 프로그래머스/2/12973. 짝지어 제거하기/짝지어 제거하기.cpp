#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char> st;
    for(char c: s){
        if (st.empty()){
            st.push(c);
        } else{
            if(st.top() != c){
                st.push(c);
            } else{
                st.pop();
            }
        }
    }
    
    if (st.empty())
        return 1;

    
    return 0;
}


// 0. stack 생성

// 2. for 문 c -> 비어있으면 넣고 / 안비어있다면 비교 / 다르면 넣고 같으면뺌/