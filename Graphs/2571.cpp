#include<bits/stdc++.h>
#define LL long long
using namespace std;
int const maxn=1e5+10;
int const mod=1e9+7;
struct bkn{
    int to,next;
}e[maxn];
int head[maxn],col[maxn],n,m,st[maxn],tot;
void add(int a,int b){
    e[tot].to=b,e[tot].next=head[a],head[a]=tot++;
}
int ans=0;
void dfs(int fa,int x,int c){
    if (c!=st[x]) ans++;
    for (int i=head[x];i+1;i=e[i].next){
        int y=e[i].to;
        if (y==fa) continue;
        dfs(x,y,st[x]);
    }
    return ;
}
int main(){
    ios::sync_with_stdio(0);
    cin>>n;
    memset(head,-1,sizeof(head));
    for (int i=2;i<=n;i++){
        int x;
        cin>>x;
        add(i,x);
        add(x,i);
    }
    for (int i=1;i<=n;i++) cin>>st[i];
    dfs(0,1,0);
    cout<<ans<<endl;
}
