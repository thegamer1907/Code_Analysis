#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define disp(x) cout << (x) << endl;
using namespace std;

int m;
vector<vector<int> >adj;
// vector<bool> vis;
// vector<int>level;

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




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n >> m;
    //disp(dp[1]);

    bfs(n);
    cout << level[m] << endl;


}
