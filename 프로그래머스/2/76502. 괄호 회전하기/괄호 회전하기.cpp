#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;

int solution(string s) {

    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        stack<char> st;// 초기화 이렇게 하는게 맞는지
        // cout << s << endl;
        // if (st.empty()){
        //     cout<<1<<endl;
        // }
        for (char c : s){
            if(c=='[' || c == '{' || c == '('){
                st.push(c);
                continue;
            }
            if(c==']'){
                if(!st.empty() && st.top() == '['){
                    st.pop();
                     continue;
                }
            }
            if(c=='}'){
                if(!st.empty() && st.top() == '{'){
                    st.pop();
                    continue;
                }
            }
            if(c==')'){
                if(!st.empty() && st.top() == '('){
                    st.pop();
                    continue;
                }
            }
            st.push(c);
            
        }
        if(st.empty()){
            cnt+=1;
        }
        
       
        s= s.substr(1, s.size()) + s[0]; // *안써도 원본이바뀌나?
           
    }
    
    
    return cnt;
}

// 스택 만들기
// s길이만큼 for문 / 

// stack -> [ { ( 때는 push 그 역은 비어있지 않고 [ { (라면 pop
// 왼쪽회전 : substr(1, a.size()); 
// 