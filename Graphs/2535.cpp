#include <bits/stdc++.h>

using namespace std;

int head[10005];
int cc[10005];
int ans;

struct node{
    int c;
    int next;
};
node tree[10005];
void add_edge(int from,int to){
    tree[to].next=head[from];
    head[from]=to;
}

void dfs(int x){
    if(head[x]==0)return;
    tree[x].c=cc[x];
    for(int i=head[x];i!=0;i=tree[i].next){
        if(cc[i]!=tree[x].c){
            ans++;
        }
        dfs(i);
    }
}

void solve(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int a;
        scanf("%d",&a);
        add_edge(a,i);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&cc[i]);
    }


    dfs(1);
    ans++;
    printf("%d",ans);


    return;
}

int main(){
    solve();
    return 0;
}
