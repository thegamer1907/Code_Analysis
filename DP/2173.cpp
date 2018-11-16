#include<bits/stdc++.h>
using namespace std;
int i,n,m,l,a[100005];set<int>s;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=n;i>=1;i--)
    s.insert(a[i]),a[i]=s.size();
    while(m--)
    {
        cin>>l;
        cout<<a[l]<<"\n";
    }
}