#include<bits/stdc++.h>
#define        lb                    lower_bound
#define        ll                    long long
#define        vi                    vector< ll >
#define        pb                    push_back
#define        all(c)                c.begin(),c.end()
#define        sz(a)                 int((a).size())
#define        tr(c,it)              for(it=c.begin();it!=c.end();it++)
#define        f(i,n)                for(ll i=0;i<n;i++)
#define        cut                   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

int main()
{
  ll n,t;
  cin>>n>>t;
  string s,s1;
  cin>>s;
  for(ll j=1;j<=t;j++)
  {
    s1=s;
    f(i,s.length()-1)
    {
        if(s1[i]=='B' && s1[i+1]=='G')
        {
            s[i]='G';s[i+1]='B';
        }
    }
  }
  cout<<s;
}
