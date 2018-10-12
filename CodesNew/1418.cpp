#include<bits/stdc++.h>
#define M 1000000007
#define Z 1000000000000000
#define mx INT_MAX
#define F   first
#define S   second
#define pub push_back
#define pob pop_back
#define ll  long long int
#define pii pair<ll,ll>
using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);
  string s;
  ll i,x[4]={0},a[4],c[4],z,y,ans=0,f;
  cin>>s;
  for(i=0;i<s.size();i++)
  {
      if(s[i]=='B')x[0]++;
      else if(s[i]=='S')x[1]++;
      else x[2]++;
  }
  cin>>a[0]>>a[1]>>a[2];
  cin>>c[0]>>c[1]>>c[2];
  cin>>z;

  while(1)
  {
      f=0;
      if(x[0]>0){if(a[0]>0)f=1;}
      if(x[1]>0){if(a[1]>0)f=1;}
      if(x[2]>0){if(a[2]>0)f=1;}
      if(f==0)break;
      if(a[0]<x[0])
      {
          y=(x[0]-a[0])*c[0];
          if(z<y)break;
          z-=y;
          a[0]=0;
      }
      else a[0]-=x[0];

       if(a[1]<x[1])
      {
          y=(x[1]-a[1])*c[1];
          if(z<y)break;
          z-=y;
          a[1]=0;
      }
      else a[1]-=x[1];

       if(a[2]<x[2])
      {
          y=(x[2]-a[2])*c[2];
          if(z<y)break;
          z-=y;
          a[2]=0;
      }
      else a[2]-=x[2];
     // cout<<z<<endl;
     // cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
      ans++;
  }
  ans+=z/(x[0]*c[0]+x[1]*c[1]+x[2]*c[2]);
  cout<<ans;
}
