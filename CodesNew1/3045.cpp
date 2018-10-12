#include<bits/stdc++.h>

using namespace std;

int k;
string s;
vector<int> v;
#define pb push_back
int main()
{
  cin>>k;
  cin>>s;

  v.pb(0);
  for (int i=0;i<s.size();i++)
  if (s[i]=='1') v.pb({i+1});

  v.pb(s.size()+1);

  int len=v.size();
  long long ans=0;

  if (k==0)
  {
      for (int i=1;i<len;i++)
        ans+=(1ll*(v[i]-v[i-1])*(v[i]-v[i-1]-1))/2;
     return !printf("%lld\n",ans);
  }

  for (int i=1;i<len-1;i++)
      if (i+k-1<len-1)
          ans+=1ll*(v[i]-v[i-1])*(v[i+k]-v[i+k-1]);

    cout<<ans<<"\n";
  return 0;
}
//samo zbog sos dp
