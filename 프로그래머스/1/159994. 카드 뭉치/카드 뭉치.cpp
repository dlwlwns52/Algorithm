#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    vector<string> s = {"a", "b", "c"};
    
    for (string s  : goal){
        if (!cards1.empty()){
            if(cards1[0] == s){
                cards1.erase(cards1.begin());
                continue;
            }
        }
            
        if (!cards2.empty()){
            if(cards2[0] == s){
                cards2.erase(cards2.begin());
                continue;
            }
        }
        // for (string s : cards1){
        //     cout << s;
        // }
        // for (string s : cards2){
        //     cout << s;
        // }
        return "No";
    }
    
    return "Yes";
}




// push_pop(0) 하면 첫번재거 되나? -> 안된다 그럼 매개변수 못오나/  아님 erase(0)도 안됨? -> v.erase(v.begin()) 
 
// 1.goal길이만큼 for문 문자 c 
// 2. c에 해당하는게 cards1[0] 이나 cards2[0] 에 있으면 스킵 없으면 return "NO"
// 3. for문끝나면 yes반환