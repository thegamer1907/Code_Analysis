#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
int n,m,i,j,k,l;
string s;
int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>s;
        cin.get();
        mp[s]++;
    }
    for(i=0;i<m;i++)
    {
        cin>>s;
        cin.get();
        mp[s]++;
    }
    map<string ,int>::iterator it=mp.begin();
    for(it;it!=mp.end();it++)
    {
        if(it->second==2)
            k++;
    }
    if(n>m||(n==m&&k%2==1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
