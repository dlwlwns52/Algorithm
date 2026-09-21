#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<vector<string>> book_time) {
    int answer = 0;
    
    // string s = "15:00";
    // int k = stoi(s.substr(0,2) + s.substr(3));
    vector<vector<int>> book_time_int;
    for(int i=0; i<book_time.size(); i++){
        book_time_int.push_back({
            stoi(book_time[i][0].substr(0,2) + book_time[i][0].substr(3)),
            stoi(book_time[i][1].substr(0,2) + book_time[i][1].substr(3))
        });   
    }
    
    map<int, vector<vector<int>>> m;

    int count = 1;
    for(int i=0; i<book_time_int.size(); i++){
        if(m.find(count) != m.end()){
            for(auto a : m){
                if(to_string(a.second.back()[1])[2] - '0' == 5){
                    if(a.second.back()[1] + 10 >= 2400){
                        a.second.back()[1] -= -2390;
                    }else{
                        a.second.back()[1] += 100;
                    }
                }else{
                    a.second.back()[1] + 10;
                }

                if(a.second[0][0] <= book_time_int[i][0] ||
                   a.second.back()[1] >= book_time_int[i][1]){
                     count += 1;
                    m[count].push_back({book_time_int[i]});
                    
                }
                else{
                    m[count].push_back({book_time_int[i]});
                }
            }
        } else{
            m[count].push_back({book_time_int[i]});
        }
    }
    
    answer = m.size();
    return answer;
}


// 시분 정수형으로 바꿔서 배열에 넣기 - 2중 for문


// int count = 0
// book_time 개수만큼 for문
//   - 키-count value-북타임 
//   - 만약 count 키값이 존재한다면
//   - for 맵 -> 현재 시각하고 지금 시각 비교  (만약 십의자리가 60인경우 올리기)만약 안에 들어온다면 count[count ]에 넣고 종료

// 
//   - else라면 count+1 에 벨류값넣기



//  (만약 십의자리가 10분더했을때 60 (ex 2250) 이라면 그리고 23시59분일경우)
//  십의자리가 10분더했을때 2400보다 작다면 3번째 +100 만약 2400보다 크다면 더하고 -2400 


// 맵에서 벨류값이 백터일때 값을 더넣으려면 m.push_back({r값}) 하면되나