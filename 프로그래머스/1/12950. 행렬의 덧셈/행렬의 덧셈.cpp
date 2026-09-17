#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for(int i=0; i<arr1.size(); i++){
        vector<int> temp;
        for(int j=0; j<arr1[0].size(); j++){
            temp.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(temp);
    }
    return answer;
}


// 1. 이중 for문을 만든다 (arr1,arr2길이만큼)
//  - 첫번째 for문에서 행마다 넣을 벡터를 만든다
//  - 두번째 for문에서 더하고 끝나면 행백터를 answer에 넣는다.