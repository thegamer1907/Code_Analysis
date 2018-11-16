#include "bits/stdc++.h"
using namespace std;
const int N = 1e6 + 5;
typedef long long ll;

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

char grid[505][505];
int n, m, k, cnt;
bool vis[505][505];
bool valid(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}
void dfs(int x, int y){

    vis[x][y] = true;
    grid[x][y] = '.';
    cnt--;
    for(int o = 0; o < 4; o++){

        int nx = x + dx[o];
        int ny = y + dy[o];

        if(valid(nx,ny) && grid[nx][ny] != '#' && !vis[nx][ny] && cnt != 0)
            dfs(nx,ny);

    }

}
int main(){

    cin >> n >> m >> k;

    int x = -1, y = -1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            cnt += (grid[i][j] == '.');
                if(grid[i][j] != '#')
                grid[i][j] = 'X';
            if(grid[i][j] == 'X'){
                tie(x,y) = tie(i,j);
            }
        }

    cnt = cnt - k;
    dfs(x,y);

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){
            cout << grid[i][j];
        }
        cout << '\n';

    }

  return 0;
}
