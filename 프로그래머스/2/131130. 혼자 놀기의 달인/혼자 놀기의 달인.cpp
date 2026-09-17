#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> cards) {
    int answer = 0;
    vector<bool> visited (cards.size(), false);
    vector<int> v;
    
    for(int i=0; i<cards.size(); i++){
        if(visited[i] == true){
            continue;
        }
        int count = 0;
        int next = cards[i]-1;

        while(true){
            if(visited[next] == true){
                v.push_back(count);
                break;
            }
            count +=1;
            visited[next]=true;
            next = cards[next]-1;
        }
    }
    
    sort(v.begin(), v.end());
    
    for(int i : v){
        cout <<i << endl; 
    }
    answer = v[v.size()-1] *v[v.size()-2]; 
    
    return answer;
}



// visited필요 cards 길이만큼 / 카운트값 / 그룹벡터

// cards길이만큼 for문 진행 : i값
// 만약 방문했다면(true) 카운트 값 백터에 넣고 넘기기

// 아니라면 whlie(true) 무한반복 걸고
// - 만약 cards[cards[i]-1] 이 true라면 종료 break
// - 아니라면 count  += 1, 방문처리








// 카드 더비 1~100번 총 100장 / 2~100 자연수 하나정하고 그수보다 작거나 같은 숫자 카드 및 상자준비
// 상자마다 카드를 한장씩 넣고 섞고 일렬로 나열 ->인덱스번호붙임
// 상자를 열었을거기 카드번호에 해당하는 상자를 또 연다 => 반복했을때 이미 열려있을 경우.
// 


//  다고르면 0점?
// 상자의수 x 상자의수
// 이렇게 연 상자들은 1번 상자 그룹입니다. 이제 1번 상자 그룹을 다른 상자들과 섞이지 않도록 따로 둡니다. 만약 1번 상자 그룹을 제외하고 남는 상자가 없으면 그대로 게임이 종료되며, 이때 획득하는 점수는 0점입니다. -> 이건 왜 0점이야 / 다고르면 0점ㅁ?

// dfs
// 1번상자 x 2번상자 이거넣을 배열?해서 maxelement
// dfs
// 0. 만약 해당 인덱스가 visited true라면 숫자 배열에 저장
// 1. 배열 길이가 2면 두개 곱해서 전역 벡터에 넣기 . 
// 2. 방문 true
// 3. 카드길이만큼 for문
//  - if(cards[cards[i]-1])== false 
//  - dfs에 해당 값하고 배열에 넣는다.

// [8,6,3,7,2,5,1,4]
// [1,2,3,4,5,6,7,8]
