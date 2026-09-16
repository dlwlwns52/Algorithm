#include <string>
#include <vector>

using namespace std;

void dfs(string word, string target, vector<bool>& visited,  int cnt, int& best, vector<string>& words){
    // 1. 타겟일 경우 변환횟수 기록 종료
    if(word == target){
        if(best >= cnt){
            best = cnt;
        }
        return;
    }
    
    // 2. word 전체 확인 / 방문하지 않았고 정확히 글자가 1개가 다르면
    for(int i=0; i<words.size(); i++){
        int count = 0;
  
        for(int k=0; k<word.size(); k++){
            if(word[k] != words[i][k]){
                count = count+1;
            }
        }
        if(count == 1 && visited[i] == false){
            // 3. 방문저리 + dfs(단어, +1) + 방문복구
            visited[i]= true;
           
            dfs(words[i], target, visited, cnt+1, best, words);
            visited[i]= false;
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    vector<bool> visited(words.size(), false);
    int best = 999;
    int cnt = 0;
    dfs(begin, target, visited, cnt, best, words);
    answer = best;
    if(best == 999){
        return 0;
    }
    return answer;
}

// dfs내부
// 1. 타겟일 경우 변환횟수 기록 종료
// 2. word 전체 확인 / 방문하지 않았고 정확히 글자가 1개가 다르면
// 3. 방문저리 + dfs(단어, +1) + 방문복구


// dfs문제 순서x
// 1. words중 현재 값과 차이가 1나는거 고른다 visited true -> 이게cog라면 값넣고 반환
// 2. visited 가 false인것중 현재 값과 차이가 1나는거 고른다 
// 

// 0. 숫자넣을 벡터 및 카운트 값 설정
// 1. for문돌리고 begin과 차이1나는것부터 시작 
// 2. dfs내부에서 visited true 설정 for문 words크기만큼 만약 false고 1차이나면 dfs() count+1  / 같으면 벡터에 값넣기

// dfs 문제
// 하나만 다른것을 체크 ->다른거 체크변수 둬서 1이면 됨
// 1. dfs(index, count, word)를 둔다.
// 2.if(word == target) return 카운트값넣기
// 3. if(index == words.size()) return
// int check변수
// 4. for문 word크기만큼 해서 같은지다른지해서체크
// +1이면 dfs문 (index+1, count, word) / (index+1, count+1,word)
// 

