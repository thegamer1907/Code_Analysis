#include<bits/stdc++.h>
using namespace std;

int n;
int m;
int num[104];
priority_queue<int,vector<int>,greater<int> >que;
int main()
{
    scanf("%d%d",&n,&m);
    int maxx = 0,minn;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
        que.push(num[i]);
        maxx = max(maxx,num[i]);
    }
    for(int i=1;i<=m;i++)
    {
        int tmp = que.top() + 1;
        que.pop();
        que.push(tmp);
    }
    while(!que.empty())
    {
        minn = que.top();
        que.pop();
    }
    printf("%d %d\n",minn,maxx+m);
}
