#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,fr=1,k,s=0;        cin>>n>>m>>k;
    vector<vector<char> >v(n,vector<char> (m,' ')),r;
    vector<vector<bool> > vis(n,vector<bool> (m));
    r=v;
    queue<pair<int,int> > q;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin>>v[i][j];
            if(v[i][j]=='.'){
                s++;
                if(fr){
                    vis[i][j]=true;
                    q.push(make_pair(i,j));
                    fr=false;
                }
            }
        }
    }
    for(int t = 0 ; t < s-k ; t++){
        pair<int,int> a=q.front();
        r[a.first][a.second]='.';
        q.pop();
        for(int ii=-1;ii<2;ii++){
            for(int ij=-1;ij<2;ij++){
                if(abs(ii)+abs(ij)!=1)continue;
                int i=a.first+ii,j=a.second+ij;
                if(i<0||i>=n||j<0||j>=m)continue;
                if(vis[i][j])continue;
                if(v[i][j]=='#')continue;
                vis[i][j]=true;
                q.push(make_pair(i,j));
            }
        }
    }
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            if(r[i][j]==' '){
                r[i][j]='#';
                if(v[i][j]=='.')r[i][j]='X';
            }
            cout<<r[i][j];
        }
        cout<<endl;
    }

}
