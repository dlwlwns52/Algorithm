#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> st;
    

    for(int i=0; i<moves.size(); i++){
        for(int j=0; j<board.size(); j++){
            if(board[j][moves[i]-1] != 0) {
                if(st.empty() == false && st.top() == board[j][moves[i]-1]){
                    answer+=2;
                    st.pop();
                } else{
                    st.push(board[j][moves[i]-1]);          
                }
                board[j][moves[i]-1] =0;    
                break;
            }
        }
    }
    
    return answer;
}

// 정사각 - 인형이 없는곳 아무일 x -  사라진 인형의 개수 - 


// [[0,0,0,0,0],
// [0,0,1,0,3],
// [0,2,5,0,1],
// [4,2,4,4,2],
// [3,5,1,3,1]]	


// 스택하나 만들기
// moves길이만큼 for문
// board 행 길이만큼 for문
//  - 만약  board[반복][move-1]!=0 이라면
//     - 만약 스택이 안 비어있고 top이 지금값과 같다면 answer+=2 후 pop
//     - else라면 push
//     - board[반복][move-1] = 0
//     - break
// 
