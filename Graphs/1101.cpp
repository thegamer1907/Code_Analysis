#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;cin>>n>>t;
    int a[n];
    for(int i=1;i<=n-1;i++)
    {
        cin>>a[i];
    }
    queue <int> q;
    q.push(1);
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        if(front==t)
        {
            cout<<"YES\n";
            return 0;
        }
        else if(front>=n)
        {
            cout<<"NO\n";
            break;
        }
        q.push(front+a[front]);
    }
    return 0;
}