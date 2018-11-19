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
ll dp1[100000],dp2[5000],dp3[100];
int main()
{ ll h,m,s,t1,t2,flag,i;
  cin>>h>>m>>s>>t1>>t2;
  
  ll st,en,hh = 12*60*60,mm = 60*60 ,ss = 60;
  
  dp3[s] = 1;
  dp2[m*60+s] = 1;
  h%=12;
  dp1[h*3600 + m*60 + s] = 1;
  
  t1%=12;
  t2%=12;
  
  flag = 0;
  
  st = t1*5 , en = t2*5;
  
  for(i=st;;i++)
  if(dp3[i%ss]==1)
  { flag|=1;
  	break;
  }
  else
  { if(i%ss==en)
  	break;
  } 
  
  st = t1*5*60 , en = t2*5*60;
  
  for(i=st;;i++)
  if(dp2[i%mm]==1)
  { flag|=1;
  	break;
  }
  else
  { if(i%mm==en)
  	break;
  }
  
  st = t1*60*60 , en = t2*60*60;
  
  for(i=st;;i++)
  if(dp1[i%hh]==1)
  { flag|=1;
  	break;
  }
  else
  { if(i%hh==en)
  	break;
  }
  
  if(flag==0)
  { cout<<"YES";
  	return 0;
  }
  
  flag = 0;
  
  st = t1*5 , en = t2*5;
  swap(st,en);
  for(i=st;;i++)
  if(dp3[i%ss]==1)
  { flag|=1;
  	break;
  }
  else
  { if(i%ss==en)
  	break;
  } 
  
  st = t1*5*60 , en = t2*5*60;
  swap(st,en);
  for(i=st;;i++)
  if(dp2[i%mm]==1)
  { flag|=1;
  	break;
  }
  else
  { if(i%mm==en)
  	break;
  }
  
  st = t1*60*60 , en = t2*60*60;
  swap(st,en);
  for(i=st;;i++)
  if(dp1[i%hh]==1)
  { flag|=1;
  	break;
  }
  else
  { if(i%hh==en)
  	break;
  }
  
  if(flag==0)
  { cout<<"YES";
  	return 0;
  }
  
  cout<<"NO";
  
  return 0;
}