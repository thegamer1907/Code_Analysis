#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define M(x) (x%MOD + MOD)%MOD
#define _pb push_back
#define _mp make_pair
#define ff first
#define ss second

ll mul(ll x,ll y)
{ ll ans=1;

  while(y>0)
  { if(y&1)
	ans=(ans*x)%MOD;
	y/=2;
	x=(x*x)%MOD;
  }
  
  return ans;
};

/**********************************************/
ll dp[30][2];
int main()
{ char a,b,c,d;
  cin>>a>>b;
  
  ll n,i;
  cin>>n;
  
  for(i=1;i<=n;i++)
  { cin>>c>>d;
   	dp[c-'a'][0] = 1;
   	dp[d-'a'][1] = 1;
    
    if(c==a && d==b)
    { cout<<"YES";
      return 0;	
	}
  }
  
  if(dp[a-'a'][1] && dp[b-'a'][0])
  cout<<"YES";
  else
  cout<<"NO";
  
  return 0;
}