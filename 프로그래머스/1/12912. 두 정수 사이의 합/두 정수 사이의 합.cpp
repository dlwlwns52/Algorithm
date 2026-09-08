#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if (a > b) {
        for (int i=b; i <a+1; i++){
            answer += i;
        }
    } else if(a < b){
          for (int i=a; i<b+1; i++){
            answer += i;
        }
    } else{
        return a;
    }
     
    return answer;
}



// 1. 두 수 중 뭐가  더 큰건지 찾기 같은경우 바로 해당값 return
//2. for문으로 작은수로 초기화하고 큰수+1까지 값넣기 cnt변수 추가
// 3. 반환
