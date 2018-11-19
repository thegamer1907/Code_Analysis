#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1e9+7;



int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin); 
  freopen("output.txt","w",stdout);
  #endif
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  string s;
  cin>>s;
  ll n;
  cin>>n;
  map<string,ll> mp;
  map<char,ll> mp1;
  map<char,ll> mp2;
  for(int i=0;i<n;i++)
  {
    string k;
    cin>>k;
    mp[k]++;
    mp1[k[0]]++;
    mp2[k[1]]++;
  }

  if(mp[s]>0)
  {
    cout<<"YES";

  }

  else
  {
     if( mp2[s[0]]>0 && mp1[s[1]]>0 ) 
    {
      cout<<"YES";
    }
    else
      cout<<"NO";
  }
  return 0;
}