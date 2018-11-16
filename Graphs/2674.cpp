#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX_N = 300+4;
bool matrix[MAX_N][MAX_N];
vector<pair<int,int> > vec[MAX_N*MAX_N];
int n,m,k;
void dfs(int res,int x,int y,int dir,int tot){
    if(res==0) tot++,res = 2;
    if(x>n||y>m)return;
    if(tot==k)tot--;
    matrix[x][y] = true;
    vec[tot].push_back({x,y});
    int xx = x,yy = y+dir;
    if(yy>m)xx++,yy=m,dfs(res-1,xx,yy,-1,tot);
    else if(yy<1)xx++,yy=1,dfs(res-1,xx,yy,1,tot);
    else dfs(res-1,xx,yy,dir,tot);
}

int main(){
    cin>>n>>m>>k;
    dfs(2,1,1,1,0);
    for(int i=0;i<k;i++){
        cout<<vec[i].size()<<" ";
        for(pair<int,int> tmp:vec[i]){
            cout<<tmp.first<<" "<<tmp.second<<" ";
        }
    cout<<endl;
    }
    return 0;
}
