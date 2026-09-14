#include <vector>
#include <algorithm>
using namespace std;

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int cnt, global_n, global_m;
vector<vector <bool>> Golbal_v;


void dfs(int temp, int i, int k, const vector<vector<int>>& picture){
    if(Golbal_v[i][k] == true){
        return;
    }
    if(Golbal_v[i][k] == false && temp == picture[i][k]){
        Golbal_v[i][k] = true;
        cnt +=1;
        if(k+1 < global_n){
            dfs(temp, i, k+1, picture);
        }
        if(i+1 < global_m){
            dfs(temp, i+1, k, picture);
        }

        if(k-1 > -1){
            dfs(temp, i, k-1, picture);
        }
        if(i-1 > -1){
            dfs(temp, i-1, k, picture);
        }
    }
}


vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    global_n= n;
    global_m= m;
    int temp = picture[0][0];

    // 1. bool배열 생성
    vector<vector <bool>> bool_v(m, vector<bool>(n,false));

    Golbal_v = bool_v;

    //2. Cnt 배열
    vector<int> cnt_v;

    //3. dfs실행
    for (int i = 0; i<m; i++){
        for (int k = 0; k<n; k++){
            if(Golbal_v[i][k] == true){
                continue;
            } else{
                if (0 != picture[i][k]){
             
                    temp = picture[i][k];
                    number_of_area+=1;

                cnt = 0;
                dfs(temp, i, k, picture);
                           cnt_v.push_back(cnt);
                }
            }
        }
    }

    max_size_of_one_area = *max_element(cnt_v.begin(), cnt_v.end());

    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}