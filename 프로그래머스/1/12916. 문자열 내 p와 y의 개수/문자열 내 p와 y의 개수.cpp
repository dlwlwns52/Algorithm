#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int sum = 0;
    for(char c : s){
        if (c == 'y' or c == 'Y'){
            sum += 1;
        } else if(c == 'p' or c =='P'){
            sum -=1;
        }
    }
    

    if (sum != 0){
        answer = false;
    }


    return answer;
}



// 0. sum = 0
// 1. for 문 s 길이만큼
// 2. if문으로 해당 char이 y Y p P일경우 구분 -> y일경우 +1 p일경우 -1
// 3. sum이 0이면 true 0이 아니면 false


