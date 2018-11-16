#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t, x=0;
    cin>>n>>t;
    ll a=0;
    map<ll,ll>mp;
    for(ll i=0;i<n-1;i++){
        ll x;
        a++;
        cin>>x;
        mp[a]=x;

    }
    if(t==1){cout<<"YES"<<endl;return 0;}
    for(int i=1;i<=a;i){
            //cout<<i<<" "<<mp[i]<<endl;
       i=i+mp[i];//cout<<i<<endl;


       if(i==t){
        cout<<"YES"<<endl;
        return 0;
       }
    }
    cout<<"NO"<<endl;


}


