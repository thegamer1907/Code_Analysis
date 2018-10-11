#include<bits/stdc++.h>
using namespace std;

map <string,int> mp;

int main()
{
    int n,m,cnt=0;
    string a,b;

    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        mp[a]=1;
    }
    for(int i=0; i<m; i++)
    {
        cin>>b;
        if(mp[b]==1) cnt++;
    }
    if(cnt)
    {
        n=n-(cnt/2)+(cnt%2);
        m=m-(cnt/2);
    }
    if(n>m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
