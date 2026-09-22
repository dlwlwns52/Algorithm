#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end());
    int max_for = citations[citations.size()-1];
   
    for(int i=0; i<max_for; i++){
        int count_max = 0;
        int count_min = 0;
        for(int j= 0; j<citations.size(); j++){
            if(i <= citations[j]){
                count_max +=1;
            }
            if(i>= citations[j]){
                count_min +=1;
            }
        }
        if(count_max >= i && i>=count_min){
            if(answer < i){
                answer = i;
            }
        }
    }
    return answer;
}

// i부터 시작 논문 최댓값까지
// i번 이상된 논문 count해서 i이상이어ㅑㅇ함
// i번 이하된 논문인용횟수count 해서 i이하여야됨
// i최댓값