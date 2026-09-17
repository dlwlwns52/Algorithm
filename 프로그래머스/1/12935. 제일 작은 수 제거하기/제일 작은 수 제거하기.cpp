#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(arr.size() == 1){
        return {-1};
    }
    
    int min = *min_element(arr.begin(),arr.end());
    for(int i : arr){
        if(i != min){
            answer.push_back(i);
        }
    }
    return answer;
}


// 0. arr 길이가 1이면 -1 반환.
// 1. 배열  *min_element로 최소값 값 변수에 저장
// 2. arr길이만큼 for문해서 최소값 아닌 값들 다 push_back