#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define disp(x) cout << (x) << endl;
using namespace std;

/*
vector<vector<int> >adj;
vector<bool> vis;
vector<int>level;

unordered_map<int,int>vis;
unordered_map<int,int>level;

void bfs(int s){
    queue<int>q;
    q.push(s);
    level[s]=0;
    vis[s]=1;
    while(!q.empty()){
        int p = q.front();q.pop();
        if(p==m)break;
        if(!vis.count(2*p)>0 && 2*p<=2*m+1){
            vis[2*p]=1;
            q.push(2*p);
            level[2*p]=level[p]+1;
        }
        if(p>1 && !vis.count(p-1)>0){
            vis[p-1]=1;
            q.push(p-1);
            level[p-1]=level[p]+1;
        }
    }
}

*/



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n ;
    int p[n+1];
    for(int i = 1;i<=n;i++)cin >> p[i];

    int maxx = 0;
    for(int i = 1;i<=n;i++){
        int cnt=1;
        int j=i;
        while(p[j]!=-1){
            j = p[j];
            cnt++;
        }
        maxx = max(maxx,cnt);
    }
    cout << maxx << endl;

}
