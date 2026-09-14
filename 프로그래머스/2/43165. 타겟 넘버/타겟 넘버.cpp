#include <string>
#include <vector>

using namespace std;

int total = 0;
int answer = 0;
int sum = 0;
vector<int> numbersGlobal;

void dfs(const vector<int>& numbers, int sum, int index){
    if (index == numbers.size()) {
        if(sum == total){
        answer+=1;
        return;
        } else{
            return;
        }
    }
        
    
    dfs(numbers, sum+numbers[index], index+1);
    dfs(numbers, sum-numbers[index], index+1);
  
}

int solution(vector<int> numbers, int target) {
    total = target;
    dfs(numbers, sum, 0);

    return answer;
}

        
//  dfs에서 현재 