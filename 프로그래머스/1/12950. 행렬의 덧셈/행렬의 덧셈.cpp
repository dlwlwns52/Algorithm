#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for(int i=0; i<arr1.size(); i++){
        vector<int> row;
        for(int k=0; k<arr1[0].size(); k++){
            row.push_back(arr1[i][k] + arr2[i][k]);
        }
        answer.push_back(row);
    }
    return answer;
}


// 행길이만큼 for문
// gkagkrh sjgrl