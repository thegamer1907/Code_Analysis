#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll a[3],n[3],p[3];

int main()
{ ll r,i,ans=0,pp,val;
  
  string str;
  cin>>str;

  for(i=0;i<str.size();i++)
  if(str[i]=='B')
  ++a[0];
  else if(str[i]=='S')
  ++a[1];
  else
  ++a[2];
  
  cin>>n[0]>>n[1]>>n[2];
  cin>>p[0]>>p[1]>>p[2];
  cin>>r;
  
  ll val1=0;

  for(i=0;i<3;i++)
  val1+=a[i]*p[i];

  while(n[0]>0 || n[1]>0 || n[2]>0)
  { pp=0;
    
    for(i=0;i<3;i++)
    { val=min(a[i],n[i]);
      n[i]-=val;

      pp+=(a[i]-val)*p[i];
    }
    
    if(pp==val1)
    break;
    	
    if(r>=pp)
    { r-=pp;
      ++ans;
    }
    else
    break;
  }
    
    //cout<<ans<<"\n"<<r<<"\n";

    val=0;

    for(i=0;i<3;i++)
    val+= a[i]*p[i];
    
    ans+=(r/val);

    cout<<ans;

    return 0;
}