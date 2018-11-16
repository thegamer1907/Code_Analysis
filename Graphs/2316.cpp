#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
 ll n;
  cin>>n;
 ll i;
 vector<ll> adj[n+5];
 for(i=1;i<=n;i++)
 {
   ll x;
   cin>>x;
   if(x==-1)
   adj[0].push_back(i);
   else
   adj[x].push_back(i);
 }
set<ll> l[2005];
vector<ll> :: iterator it;
for(it=adj[0].begin();it!=adj[0].end();it++)
{
l[0].insert(*it);
//cout<<*it<<" ";
}
//cout<<"\n";
ll c=1;
ll size=l[0].size();
set<ll> :: iterator it1;
while(size<n)
{
  for(it1=l[c-1].begin();it1!=l[c-1].end();it1++)
    {
      for(it=adj[*it1].begin();it!=adj[*it1].end();it++)
        {
             l[c].insert(*it);
         //     cout<<*it<<" ";
        }
    }
  //  cout<<"\n";
  size=size+l[c].size();
  c++;
}
cout<<c;
}
