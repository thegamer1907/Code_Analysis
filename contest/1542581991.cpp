#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <string>
using namespace std;
const int N = 30;
const int magic = 25;
const int inf = 1e9 + 5;
const int mod = 1e9 + 7;
typedef long long ll;
int n, k;
bool dp[N][N][N][N], tdp[N][N][N][N];
int r[N];
int a[4];
int main(){
    cin >> n >> k;
    int tmp = magic / 2;
    for(int i = 0; i < n; ++ i){
        int msk = 0;
        for(int j = 0; j < k; ++ j){
            scanf("%d", &a[j]);
            msk |= (1 << j) * a[j];
            a[j] = 2 * a[j] - 1;
        }
    
        dp[tmp + a[0]][tmp + a[1]][tmp + a[2]][tmp + a[3]] = 1;
        r[msk]++;
    }
    for(int msk = 0; msk <= 15; ++ msk){
        int mx = min(magic, r[msk]);
        for(int i = 0; i < k; ++i){
            if(msk & (1 << i)){
                a[i] = 1;
            }
            else{
                a[i] = 0;
            }
            a[i] = 2 * a[i] - 1;
        }
        for(int cnt = 0; cnt < mx; ++ cnt){
            for(int i = 1; i < magic; ++ i){
                for(int j = 1; j < magic; ++j){
                    for(int k = 1; k < magic; ++k){
                        for(int m = 1; m < magic; ++m){
                            tdp[i + a[0]][j + a[1]][k + a[2]][m + a[3]]|= dp[i][j][k][m];
                        }
                    }
                }
            }
            for(int i = 1; i < magic; ++ i){
                for(int j = 1; j < magic; ++j){
                    for(int k = 1; k < magic; ++k){
                        for(int m = 1; m < magic; ++m){
                            dp[i][j][k][m] |= tdp[i][j][k][m];
                            tdp[i][j][k][m] = 0;
                        }
                    }
                }
            }
        }
    }
    int flag = 0;
    for(int i = 0; i <= tmp; ++ i){
        for(int j = 0; j <= tmp ; ++ j){
            for(int k = 0; k <= tmp ; ++ k){
                for(int m = 0; m <= tmp; ++ m){
                    flag |= dp[i][j][k][m];
                }
            }
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
