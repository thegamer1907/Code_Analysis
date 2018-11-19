#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool b(int x,int lo,int hi){ return (x>lo && x<hi);}
bool o(int x, int lo, int hi) { return (x<lo || x>hi);}

int main()
{
  int h,m,s,t1,t2;cin>>h>>m>>s>>t1>>t2;
  h*=5; t1*=5; t2*=5;
  if(m>0 || s>0)h++;
  h%=60;
  t1%=60;
  t2%=60;
  h*=2, m*=2, s*=2, t1*=2, t2*=2;
  if(s>0)m++;
  
  int lo=min(t1,t2);
  int hi=max(t1,t2);
  //printf("%d %d %d %d %d\n",h,m,s,lo,hi);
  


  bool bet = b(h,lo,hi) || b(s,lo,hi) || b(m,lo,hi);
  bool out = o(h,lo,hi) || o(s,lo,hi) || o(m,lo,hi);

  if(out && bet)
    printf("NO\n");
  else
    printf("YES\n");
  return 0;
}
