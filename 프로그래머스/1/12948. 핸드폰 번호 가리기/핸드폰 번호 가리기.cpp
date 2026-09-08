#include <string>
#include <vector>


using namespace std;

string solution(string phone_number) {
    string answer = "";
    int size = phone_number.size();
    for (int i =0; i <size-4; i++){
        phone_number[i] = '*';
    }
    
    return phone_number;
}

// 1. 전체 길이 추출
// 2. 전체길이에서 뒤에 네자리 추출 substr
// 3. 전체길이에서 뒤에 네자리 뺀 숫자 *
// 4. 합치고 반환