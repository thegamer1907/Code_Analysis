#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    string st;
    map<string,ll>mp;
    for(ll i=1; i<=a; i++)
    {
        cin>>st;
        mp[st]=1;
    }
    ll c=0;
    for(ll i=1; i<=b; i++)
    {
        cin>>st;
        if(mp[st]==1)
            c++;
    }
    if(c%2==1)
    {
        if(a>=b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            //a++;
    }
    else
    {
        if(a>b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
