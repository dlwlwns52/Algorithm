#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    unordered_map<string, int> m;
    
    for(int i=0; i<want.size(); i++){
        m[want[i]] = number[i];
    }
    
    unordered_map<string, int> t;
    for(int i=0; i<discount.size()-9; i++){
        int total = 0;
        t = m;
        for(int j=0; j<10; j++){
            if(t.find(discount[j+i]) != t.end() && t[discount[j+i]]>=1){
                t[discount[j+i]]-=1;
            }
        }
        
        // for (auto a : t){
        //     cout<<a.second<<endl;
        // }
        // cout << "======" << endl;
        for(auto k : t){
            total += k.second;
        }
                  
        // cout << total;
        if (total == 0){
            answer+=1;
        }  
    }
    return answer;
}

// for (int i : map)하면 벨류가 들어가는게아니가?

// want키 number 벨류
//  첫 For문 discount.size-9
// 두번째는 10
