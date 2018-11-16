#include <bits/stdc++.h>

#define fr first
#define sc second
typedef long long ll;
using namespace std;
ll const MAXN=2*1e5+10,pi=acos(-1);
int n,level[10101],ans=1,a;
vector<int> v[MAXN];
queue<int>q;
void bfs(int s){
    if(level[s])return;
    //if(!v[s].empty())return;
    q.push(s);
    level[s]=1;
    while(q.size()){
        int p=q.front();
        q.pop();
        for(int i=0;i<v[p].size();i++){
            if(!level[v[p][i]]||level[p]+1<level[v[p][i]]){
                q.push(v[p][i]);
                ans=max(ans,level[v[p][i]]=level[p]+1);
            }
        }
    }
}
/*



*/
int main()
{
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a!=-1)
            v[a].push_back(i+1);
        }
        for(int i=0;i<n;i++){
                memset(level,0,sizeof level);
                bfs(i+1);
        }
        cout<<ans;

}
