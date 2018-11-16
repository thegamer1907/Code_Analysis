#include <bits/stdc++.h>

using namespace std;
#define int long long
#define double long double

int n, m, k;
string s[500];
char used[500][500];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(int x, int y){
    used[x][y] = true;
    for(int k = 0; k < 4; k++){
        int i = x + dx[k];
        int j = y + dy[k];
        if(i >= 0 && i < n && j >= 0 && j < m){
            if(!used[i][j] && s[i][j] == '.'){
                dfs(i, j);
            }
        }
    }
    if(k){
        k--;
        s[x][y] = 'X';
    }
}

main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++) cin >> s[i];
    int x, y;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(s[i][j] == '.'){
                x = i;
                y = j;
            }
        }
    }
    dfs(x, y);
    for(int i = 0; i < n; i++) cout << s[i] << endl;
}
