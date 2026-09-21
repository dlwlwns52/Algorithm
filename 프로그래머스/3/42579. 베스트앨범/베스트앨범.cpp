#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    

    map<string, vector<pair<int ,int>>> songs;
    map<string, int> total;
    
    for(int i=0; i<plays.size(); i++){
        songs[genres[i]].push_back({plays[i],i});
    }

    for(int i=0; i<plays.size(); i++){
        total[genres[i]] += plays[i];
    }
    
    vector<pair<string, int>> tv(total.begin(), total.end());
    sort(tv.begin(), tv.end(), [](auto a, auto b){
        return a.second > b.second;
    });
   
    
    for(auto song : tv){
       vector<pair<int ,int>> v = songs[song.first];
        sort(v.begin(), v.end(), [](auto a, auto b){
            if(a.first == b.first){
                return a.second < b.second;
            }
            return a.first>b.first;
        });
        
        if(v.size() == 1){
            answer.push_back(v[0].second);
        }else{
            answer.push_back(v[0].second);
            answer.push_back(v[1].second);
        }
    }
    
    return answer;
}

