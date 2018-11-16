#include<bits/stdc++.h>
using namespace std;

int n, m, q, cumRow[505][505], cumCol[505][505];
char grid[505][505];

int calcRow(int TR, int LC, int BR, int RC){
    return cumRow[BR][RC]+cumRow[TR-1][LC-1]-cumRow[TR-1][RC]-cumRow[BR][LC-1];
}
int calcCol(int TR, int LC, int BR, int RC){
    return cumCol[BR][RC]+cumCol[TR-1][LC-1]-cumCol[TR-1][RC]-cumCol[BR][LC-1];
}
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
    while(q-- && cin >> TR >> LC >> BR >> RC){
        if(TR == BR && LC == RC){
            cout << 0 << endl;
            continue;
        }
        cout << calcRow(TR, LC+1, BR, RC)+calcCol(TR+1, LC, BR, RC) << endl;
    }
    return 0;
}
