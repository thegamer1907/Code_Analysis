#include<bits/stdc++.h>
using namespace std;

int n, m, q, cumRow[505][505], cumCol[505][505];
char grid[505][505];

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int TR, LC, RC, BR;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin >> grid[i][j];
    for(int i = 1 ; i <= n ; i++){
        int cur = 0;
        for(int j = 2 ; j <= m ; j++){
            cur += (grid[i][j-1] == '.' && grid[i][j] == '.');
            cumRow[i][j] = cur+cumRow[i-1][j];
        }
    }
    for(int i = 1 ; i <= m ; i++){
        int cur = 0;
        for(int j = 2 ; j <= n ; j++){
            cur += (grid[j][i] == '.' && grid[j-1][i] == '.');
            cumCol[j][i] = cur+cumCol[j][i-1];
        }
    }
    cin >> q;
    while(q-- && cin >> TR >> LC >> BR >> RC)
        cout << cumCol[BR][RC]+cumCol[TR][LC-1]-cumCol[TR][RC]-cumCol[BR][LC-1]+
                cumRow[BR][RC]+cumRow[TR-1][LC]-cumRow[TR-1][RC]-cumRow[BR][LC] << endl;
    return 0;
}
