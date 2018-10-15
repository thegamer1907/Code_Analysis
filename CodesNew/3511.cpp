#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#define rii register int i
#define rij register int j
using namespace std;
int x[105],n,m,maxn;
priority_queue<int>q;
int main()
{
    cin>>n;
    cin>>m;
    for(rii=1;i<=n;i++)
    {
        scanf("%d",&x[i]);
        q.push(-1*x[i]);
        maxn=max(maxn,x[i]);
    }
    maxn+=m;
    for(rii=1;i<=m;i++)
    {
        int ltt=q.top();
        q.pop();
        ltt--;
        q.push(ltt);
    }
    int kkk=0;
    for(rii=1;i<=n;i++)
    {
        kkk=min(kkk,q.top());
        q.pop();
    }
    kkk*=-1;
    cout<<kkk<<" "<<maxn;
	return 0;
}
