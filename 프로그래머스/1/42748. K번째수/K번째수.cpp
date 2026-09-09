#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(vector<int> v : commands){
        vector<int> imsi; // 실전에서는 어떤 변수명으로 할지
        imsi.assign(array.begin()+(v[0]-1), array.begin()+v[1]);
        sort(imsi.begin(), imsi.end());
        answer.push_back(imsi[v[2]-1]);
    }
    return answer;
}



// 1. commands size대로 for문
// 2. 새로운 배열 생성 후 커멘드 첫번째 두번째로 자른값 넣기 숫자-1 주의
// 3. 정렬
// 4. 숫자-1  answer에 넣기