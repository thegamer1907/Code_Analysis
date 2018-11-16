#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    
    int n,m,x;
    cin>>n>>m;
    vector<int> v(n+1);
    for(int i=1;i<n+1;i++)cin>>v[i];
    set<int> s;
    for(int i=n;i>0;i--)
    {s.insert(v[i]);
    v[i]=s.size();}
    
    for(int j=0;j<m;j++)
    {
        cin>>x;
        cout<<v[x]<<"\n";
    }
    return 0;
}