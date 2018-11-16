//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t1;
    cin>>n>>t1;
    int a[n];
    for(int i=1;i<n;++i)
        cin>>a[i];
    int c[n+1]={0};
    queue<int>q;
    c[1]=1;
    q.push(1);
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        if(t==n || c[t+a[t]])
            break;
        c[t+a[t]]=1;
        q.push(t+a[t]);
    }
    if(c[t1])
        cout<<"YES";
    else
        cout<<"NO";
}