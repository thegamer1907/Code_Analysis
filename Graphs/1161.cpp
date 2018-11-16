#include<bits/stdc++.h>
#include <string.h>
#define        lb                    lower_bound
#define        ll                    long long
#define        vi                    vector< ll >
#define        pb                    push_back
#define        all(c)                c.begin(),c.end()
#define        sz(a)                 int((a).size())
#define        tr(c,it)              for(it=c.begin();it!=c.end();it++)
#define        f(i,j,n)                for(ll i=j;i<n;i++)
#define        cut                   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;


int main()
{
   ll n,t,x;
   cin>>n>>t;
   vector <ll>v(n);
   f(i,1,n)
   {
       cin>>x;
       v[i]=x+i;
   }
   ll j=1;
   while(v[j]!=t && v[j]!=n)
   {
       j=v[j];
   }
   if(v[j]==t)
    cout<<"YES";
   else
    cout<<"NO";
}
