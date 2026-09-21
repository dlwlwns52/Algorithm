#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> st;
    for (int i=0; i<moves.size(); i++){
        for(int j=0; j<board.size(); j++){
            if(board[j][moves[i]-1] == 0){
                continue;
            }
            else{
                if(!st.empty() && st.top() == board[j][moves[i]-1]){
                    answer+=2;
                    st.pop();
                    board[j][moves[i]-1]= 0;
                    break;
                } else{
                    st.push(board[j][moves[i]-1]);
                    board[j][moves[i]-1]= 0;
                    break;
                }
            }
        }
    }
    return answer;
}


// 스택생성

// moves길이대로 for문
//  for문 보드 행길이 j
// 만약 board[j][moves-1]가  0이라면 컨티뉴
// 숫자라면 만약 스택이 존재하고 값이 같다면 pop answer+=2, 0처리, break
//  값이 틀리다면 push
