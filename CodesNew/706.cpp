                //-------@@@ <3 KEEP SILENT  and  CODE <3   %%%%------//
#include<bits/stdc++.h>
#include<string>
using namespace std;
vector<int> v;
map<string,int> mp ;
typedef  int long long ll;
const int N=1<<20;
set<ll> s[4];
set<ll>:: iterator it;
int main()
{
  ll a,b,c=0;
  cin>>a>>b;
  string s;
  int p[a];
  for(int i=0;i<a;i++)
  {
      cin>>s;
      mp[s]=1;
  }
  for(int i=0;i<b;i++)
  {
      cin>>s;
      if(mp[s]==1)
        c++;
  }
  if(c%2==1)
    a++;
  if(a>b)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;


}
// freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
