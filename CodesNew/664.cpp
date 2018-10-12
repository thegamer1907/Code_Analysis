#include<bits/stdc++.h>
long long int a[1000000];
using namespace std;
typedef long long int ll;
int main()
{
    ll i,j,n,k,t,s=0,x,m=1,ck=1;
    map<string,ll>mp,mp1;
    map<string,ll>::iterator it;
    vector<string> v;
    pair<char,ll>p;
    list<ll>l;
    string s1;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>s1;
        mp[s1]++;
    }
    for(i=0; i<m; i++)
    {
        cin>>s1;
        mp[s1]++;
    }
    if(n<m)
        cout<<"NO"<<endl;
    else if(n>m)
        cout<<"YES"<<endl;
    else
    {
        if(mp.size()%2==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    //main();
    return 0;
}
