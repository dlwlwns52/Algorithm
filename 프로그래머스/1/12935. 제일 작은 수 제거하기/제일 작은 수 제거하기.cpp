#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1){
        return {-1};
    }
    vector<int> answer;
    vector<int> cp = arr;
    sort(cp.begin(), cp.end());
    int minist = cp[0];
    
    auto it = find(arr.begin(), arr.end(), minist);
    arr.erase(it);
    
    return arr;
}

// 1. 길이가 1일경우 -1리턴
// 2. arr값 복사  -> 정렬후에 0번째값 찾고
// 3. find()


// 1. 가장 작은 값 찾기
//  2. 작은 값 위치 제거