#include <string>
#include <vector>
#include <iostream>
using namespace std;

int cnt = 0;
int tar = 0;

void dfs(int sum, int index, vector<int> numbers){
    if(index == numbers.size()){
        if(tar == sum){
            cnt +=1;
        }
        return;
    }
    
    dfs(sum+numbers[index], index+1, numbers);
    dfs(sum-numbers[index], index+1, numbers);
}

int solution(vector<int> numbers, int target) {
    tar = target;
    int sum = 0;
    int index = 0;
    dfs(sum,index, numbers);
    return cnt;
}

// dfs
// 1. 전역 cnt값 및 target설정
// 2. dfs매개변수 -> sum, index, numbers?
// 3. if(index == numbers.size()-1)  -> if(target == sum ) cnt +1
// 4. dfs(sum+numbers[index], index+1, numbers)