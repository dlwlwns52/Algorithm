#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> st;
    
    for(int i=0; i<moves.size(); i++){
        for(int j=0; j<board.size(); j++){
            if(board[j][moves[i]-1] != 0) {
                if(st.empty() || st.top() != board[j][moves[i]-1]){
                    st.push(board[j][moves[i]-1]);
                } 
                else{
                    st.pop();
                    answer +=2;
                }
                board[j][moves[i]-1] = 0;
                break;
            }
        }
    }
    return answer;
}




// 0. #include<stack> stack<int> 정의
// 1. moves 길이만큼 for문 진행 i
// 2. board 행길이만큼 for 문 진행 - 이중for문 j
// 3. 만약 board[j][moves[i]-1] 가 0이 아니라면
//  - st이 비어있거나 top() 값이 다르면 push
//  - st가 비어있지 않고 top() 값이 같으면 st.pop()후에 answer+1 
//  - board[j][moves[i]-1] 값 0
//  -break


// 

// [[0,0,0,0,0],
// [0,0,1,0,3],
// [0,2,5,0,1],
// [4,2,4,4,2],
// [3,5,1,3,1]]

// 04240103
// 431132''4
