#include "bits/stdc++.h"
using namespace std;

/*
  zura Ja - nai.
  KATSURA DA.
*/

#define F first
#define S second
#define ios ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

const int N = 1e5 + 5;

int n, k;

bool vis[N][5][3][3][3][3];
int cur[4];
int sv[N][4];
void get(int idx, int cnt){
    if(cnt > 4)return;
    for(int j = 0; j < k; j++)if(cur[j] > 2)return;
    bool &x = vis[idx][cnt][cur[0]][cur[1]][cur[2]][cur[3]];
    if(x)return;
    x=1;
    if(idx == n){
        if(!cnt)return;
        for(int j = 0; j < k; j++)if(cur[j] > cnt / 2)return;
        puts("YES");
        exit(0);

    }

    get(idx + 1, cnt);
    for(int j = 0; j < k; j++)cur[j] += sv[idx][j];
    get(idx + 1, cnt + 1);
    for(int j = 0; j < k; j++)cur[j] -= sv[idx][j];



}


int main(){

    scanf("%d%d", &n, &k);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < k; j++)
            scanf("%d", &sv[i][j]);
    get(0,0);
    puts("NO");


    return 0;
}
