#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[m];
    vector<ll>v;
    for(ll i=0;i<m;i++)
    {
    cin>>arr[i];
    v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    ll r=k;
    ll ct=0;
    ll count=0;
    for(ll i=0;i<v.size();i++)
    {
        if(v[i]<=r)
        ct++;
        else
        {
            if(ct==0)
            {
                ll tmp=(v[i]- r)/k;
                if((v[i]-r)%k!=0)
                tmp++;
                r=r+tmp*k;
                i--;
            }
            else
            {
            count++;
            r=r+ct;
            i--;
            ct=0;
            }
            
        }
    }
    
    cout<<count+1<<endl;
    /*
    ll l=1,r=k;
    for(ll i=0;i<m;i++)
    {
        if(arr[i]<)
    }
    ll a=n%4;
    if(a==1)
    {
        cout<<"0"<<" "<<"A";
    }
    else if(a==3)
    {
        cout<<"2"<<" "<<"A";
    }
    else if(a==2)
    {
        cout<<"1"<<" "<<"B";
    }
    else
    {
        cout<<"1"<<" "<<"A";
    }*/
    //cout << "Hello World!" << endl;
    return 0;
}