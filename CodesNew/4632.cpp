/*I'll never let you go, if you  promise
not to fade away, never fade away */

#include <bits/stdc++.h>
using namespace std;
 
#define fst() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pii;

int main()
{
  fst();
  ll n;
  cin>>n;
  ll s[n];
  for(int i=0;i<n;i++)
  {
  	cin>>s[i];
  }
  sort(s,s+n);
  int i=0,pos=n/2,ans=0;
  while(i<n/2 && pos<n)
  {
  	while(1)
  	{
  		if(s[i]*2<=s[pos])
  		{
  			ans++;
  			pos++;
  			break;
  		}
  		else pos++;
  		if(pos>=n) break;
  	}
  	i++;
  }
  cout<<n-ans<<'\n';
  return 0;
}  

/* 2 2 4 5 6 7 8 9
1 2 3 5 6 6 8 9

*/