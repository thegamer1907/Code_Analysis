
#include <bits/stdc++.h>
using namespace std;

#define fill(a,val) memset(a, (val), sizeof a)
#define pb push_back
#define lli long long int
#define scantype int
#define endl "\n"
#define unique(x) x.erase(unique(x.begin(),x.end()), x.end())

lli MOD  = 1000000007;
lli inf = 1e15;

void scan(scantype &x);
lli powermod(lli _a,lli _b,lli _m){lli _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}
lli string_to_number(string s){lli x=0; stringstream convert(s); convert>>x; return x;}
lli add(lli a,lli b){lli x = (a+b)%MOD; return x; }
lli mul(lli a,lli b){lli x = (a*b)%MOD; return x; }
lli sub(lli a,lli b){lli x = (a-b+MOD)%MOD; return x; }
lli divi(lli a,lli b){lli x = a;lli y = powermod(b,MOD-2,MOD);lli res = (x*y)%MOD;return res;}

#define N 100003

lli req[3],has[3],price[3],money;

int main(void)
{
  string st;
  cin>>st;

  for(auto it : st) {
    if(it == 'B') req[0]++;
    else if(it == 'S') req[1]++;
    else req[2]++;
  }

  for(int i=0;i<3;i++) cin>>has[i];
  for(int i=0;i<3;i++) cin>>price[i];
  cin>>money;

  lli res = 0 , mn = 1e12;

  while(1) {
    mn = 1e12;
    for(int i=0;i<3;i++) if(req[i]!=0) mn = min(mn , has[i] / req[i]);
    // for(int i=0;i<3;i++) cerr<<has[i]<<" ";
    // cerr<<"- "<<mn<<endl;
  
    if(mn == 0) {
      for(int i=0;i<3;i++) {
        if(req[i]==0) continue;
        if(has[i] / req[i] == 0) {
          lli moneyNeeded = (req[i] - has[i]) * price[i];
          if(moneyNeeded > money) {
             cout<<res;
             return 0;
          } else {
            has[i] = req[i];
            money -= moneyNeeded;
          }
        }
      }
      continue;
    }
    for(int i=0;i<3;i++) has[i] -= mn * req[i];
    res += mn;
    bool exit = true;
    for(int i=0;i<3;i++) if(req[i] && has[i]) exit = false;
    if(exit) break;
  }

  lli moneyForOne = 0;
  for(int i=0;i<3;i++) moneyForOne += req[i] * price[i];

  res += money / moneyForOne;
  cout<<res;
  // 2 3 1

  // 5 6 9
  
  // 1 0 7 
  return 0;
}


void scan(scantype &x)
{
    register int c = getchar(); //for negative/positive
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = getchar());
    if(c=='-') {neg=1;c=getchar();}
    for(;c>47 && c<58;c = getchar()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

