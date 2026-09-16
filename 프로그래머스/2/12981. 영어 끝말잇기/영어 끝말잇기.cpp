#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> temp;
    bool b = false;
    for(int i=0; i<words.size(); i++){
        // for(string t : temp){
        for(int k=0; k<temp.size(); k++){
            if (temp[k] == words[i]){
                answer.push_back(i % n + 1); 
                answer.push_back((i+n)/n);
                b = true;
                break;
            }
            if(i-k==1){
                string word = temp[k];
                int size = temp[k].size();
                char c = word[size-1];
                string w=words[i];
                char cc = w[0];
                if (c != cc){
                answer.push_back(i % n + 1); 
                answer.push_back((i+n)/n);
                    b = true;   
                    break;
                }
                
            }
        }
                if (b) break;  // ★ 이게 필요함
        temp.push_back(words[i]);
    }
    
    if(!b){
        return {0,0};
    }
    return answer;
}


// 인덱스 % n 해서 +1한값이 첫번째
// words.size()  + n -1 /n
// words길이만큼 for문

// 벡터 find하면 bool값나옹는지