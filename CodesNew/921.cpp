#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long  double ldb;
typedef vector<ll> vi;
typedef vector<vector<ll> > vii;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define repa(i,a,b) for(int i=a;i<b;i++)
#define all(c) (c).begin(),(c).end()
#define N 1e5+5



int main()
{
    
    ll n,m;
    cin>>n>>m;
    map<string,ll> mp1,mp2;
    string s;
    ll cnt1=0,cnt2=0,common=0;
    for(ll i=0;i<n;i++)
    {
        cin>>s;
        mp1[s]++;
        if(mp1[s]==1)
        cnt1++;
    }
   
     for(ll i=0;i<m;i++)
    {
        cin>>s;
       
        if(mp1[s]>=1)
        common++;
        else
        {
            mp2[s]++;
            cnt2++;
        }
    }
    
    cnt1-=common;
    cnt1+=(common)%2;
  
    {
        if(cnt1>cnt2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
   
   
}