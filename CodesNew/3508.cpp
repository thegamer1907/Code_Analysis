#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#define rii register int i
#define rij register int j
using namespace std;
int x[105],n,m,chen_zhe;
priority_queue<int>q;
int main()
{
    cin>>n;
    cin>>m;
    for(rii=1;i<=n;i++)
    {
        scanf("%d",&x[i]);
        q.push(-1*x[i]);
        chen_zhe=max(chen_zhe,x[i]);
    }
    chen_zhe+=m;
    for(rii=1;i<=m;i++)
    {
        int ltt=q.top();
        q.pop();
        ltt--;
        q.push(ltt);
    }
    int kkksc03=0;
    for(rii=1;i<=n;i++)
    {
        kkksc03=min(kkksc03,q.top());
        q.pop();
    }
    kkksc03*=-1;
    cout<<kkksc03<<" "<<chen_zhe;
}