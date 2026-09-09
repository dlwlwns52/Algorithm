#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    for(int i : arr){
        if (answer.back() !=i){
            answer.push_back(i);
        }
    }

    return answer;
}


// 1. arr길이만큼 for문
// 2. arr 넣는데 answer의 마지막과 비슷하면 스킵