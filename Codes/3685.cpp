#include <iostream>
using namespace std;
typedef long long ll;

ll cnt[3]; //B,S,C
ll nb,ns,nc;
ll pb,ps,pc;
ll r;
ll ans=0;

int main()
{
  string s;
  cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>r;
  for (int i=0;i<s.length();i++){
    if (s[i]=='B')
      cnt[0]++;
    else if (s[i]=='S')
      cnt[1]++;
    else if (s[i]=='C')
      cnt[2]++;
  }
  ll cost=cnt[0]*pb+cnt[1]*ps+cnt[2]*pc;
  for (;;){
    ll temp=0;
    if (nb>=cnt[0])
      nb-=cnt[0];
    else{
      temp+=(cnt[0]-nb)*pb;
      nb=0;
    }
    if (ns>=cnt[1])
      ns-=cnt[1];
    else{
      temp+=(cnt[1]-ns)*ps;
      ns=0;
    }
    if (nc>=cnt[2])
      nc-=cnt[2];
    else{
      temp+=(cnt[2]-nc)*pc;
      nc=0;
    }
    if (temp==cost || temp>r)
      break;
    r-=temp;
    ans++;
  }
  ans+=r/cost;
  cout<<ans<<endl;
  return 0;
}
    
