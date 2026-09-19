#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> cards) {
    int answer = 0;
    vector<int> groups;
    vector<bool> visited(cards.size()+1, false);
    
    for(int i=0; i<cards.size(); i++){
        if(visited[i+1] == true){
            continue;
        }
        int count =0;
        int card = cards[i];
        while(true){
            if(visited[card] ==false){
                count +=1;
                visited[card] = true;
                card = cards[card-1];
            } else{
                break;
            }
        }
   
        groups.push_back(count);
    }
    sort(groups.begin(), groups.end());
    int max1 = groups[groups.size()-1];
    int max2 = groups[groups.size()-2];
    
    answer = max1 * max2;
    return answer;
}



// [8,6,3,7,2,5,1,4]
// [0,1,2,3,4,5,6,7]
// {1,4,7,8}, {2,5,6}, {3}
// 그룹 개수를 벡터에 저장해야겠네

// 그룹 개수 넣을 벡터, visited+1

// visited를 cards개수+1만큼, 그룹 개수 백터 초기화
// cards개수만큼 for문 - io
// 만약 visited[i+1]라면 contune
// int count=1;
// int card = card[i];
// while(true) 
//  - if(visited[card] 방문하지 않았다면 )
//      - count+1
//      - card = cards[card]
//     = 방문처리
//  - else라면 break
// 그룹 개수 벡터 push_back

// 오름차순 정렬 가장 상위 두개 곱해서 반환