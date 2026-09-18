#include <string>
#include <vector>

using namespace std;

int count = 0;


void dfs(int index, int sum, vector<int>& numbers, int target){
    if(index == numbers.size()){
        if(sum == target){
            count+=1;
        }
        return;
    }
    
    dfs(index+1, sum-numbers[index], numbers,target);
    dfs(index+1, sum+numbers[index], numbers,target);
}

int solution(vector<int> numbers, int target) {
    int index = 0;
    int sum = 0;
    
    dfs(index, sum, numbers, target);
    
    return count;
}




// 1. dfs에 sum하고 index넣는다 , count전역변수
//  - index가 넘버 길이-1랑 같으면 반환하되 sum이 target인경우  count+1
//  - dfs(sum-numbers[index], index+1), dfs(sum+numbers[index], index+1) 두개 지정
// 