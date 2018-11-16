#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    set<int>s;
    int suffix[n+1];int ans;
    for(int i=n;i>=1;i--)
    {
        s.insert(a[i]);
        ans = s.size();
        suffix[i]=ans;
    }
    while(m--)
    {
        cin>>n;
        cout<<suffix[n]<<endl;
    }
    
    return 0;
}