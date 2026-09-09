#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    sort(num_list.begin(), num_list.end());
    
    return {num_list.begin(),num_list.begin()+5};
}



// 1. num_list 오름차순 정렬
// 2. for 문 5번 돌려서 answer에 값넣기