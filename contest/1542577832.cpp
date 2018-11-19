
#include<bits/stdc++.h>
#define ll long long
#define INF 1008611111
#define M (t[k].l+t[k].r)/2
#define lson k*2
#define rson k*2+1
using namespace std;
int vis[125];
int nextInt() {
    int d;
    scanf("%d",&d);
    return d;
}
int main() {
    memset(vis,0,sizeof(vis));
    for(int i=1; i<10; i++);
    int t1,t2,h,m,s,tag=1,st,ed,i;
    h=nextInt();
    m=nextInt();
    s=nextInt();
    t1=nextInt();
    t2=nextInt();
    for(int i=0; i<10; i++);
    if(h==12)
        h=0;
    if(m==0&&s==0)
        vis[h*10]=1;
    else
        vis[h*10+5]=1;
    if(s==0)
        vis[m*2]=1;
    else
        vis[m*2+1]=1;
    vis[s*2]=1;
    if(t1>t2)
        {
            int t=t1;
            t1=t2;
            t2=t;
        }
    st=t1*10;
    ed=t2*10;
    for(i=st; i<=ed; i++) {
        if(vis[i]) {
            tag=0;
            break;
        }
    }
    if(tag) {
        cout<<"YES"<<endl;
        return 0;
    }
    int flag=1;
    for(i=ed; i<=120; i++) {
        if(vis[i]) {
            flag=0;
            break;
        }
    }
    for(i=0; i<=st; i++) {
        if(vis[i]) {
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        puts("NO");
    return 0;
}
