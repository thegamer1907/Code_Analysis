#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int n,m,q;
    cin>>n>>m;
    vector<vector<char> > ch(n+1,vector<char>(m+1,'#'));
    vector<vector<int> > v(n+1,vector<int>(m+1));
    vector<vector<int> > h(n+1,vector<int>(m+1));
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            cin>>ch[i][j];
            if(ch[i][j]==ch[i-1][j]&&ch[i][j]=='.')v[i][j]=1;
            if(ch[i][j]==ch[i][j-1]&&ch[i][j]=='.')h[i][j]=1;
            v[i][j]+=v[i-1][j]+v[i][j-1]-v[i-1][j-1];
            h[i][j]+=h[i-1][j]+h[i][j-1]-h[i-1][j-1];
        }
    }
    for(cin>>q;q;q--){
        int r,c,a,b;
        cin>>r>>c>>a>>b;
        cout<< v[a][b]-v[a][c-1]-v[r][b]+v[r][c-1]+
               h[a][b]-h[r-1][b]-h[a][c]+h[r-1][c]<<endl;
    }
}
