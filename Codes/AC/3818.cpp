#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define lD long double
#define fio ios_base::sync_with_stdio(0)
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi >
#define vii vector<ii >
#define vvii vector<vii >
#define ll pair<lli,lli>
#define vl vector<lli>
#define vvl vector<vl >
#define vll vector<ll >
#define vvll vector<vll >
#define M_PI 3.14159265358979323846
#define MOD 100000000
#define MAX 100005
#define EPS 1e-4
#define NINF LONG_MIN
#define INF LONG_MAX

lli r1=0,r2=0,r3=0,n1,n2,n3,p1,p2,p3,money;

int main(){
  fio;
  cin.tie(NULL);
  lli ans=0;
  string s;
  cin>>s;
  for(auto it:s){
    if(it=='B') r1++;
    else if(it=='S') r2++;
    else r3++;
  }
  cin>>n1>>n2>>n3;
  cin>>p1>>p2>>p3;
  cin>>money;
  lli zz=LONG_MAX;
  if(r1!=0) zz=min(zz,n1/r1);
  if(r2!=0) zz=min(zz,n2/r2);
  if(r3!=0) zz=min(zz,n3/r3);
  ans=zz;
  n1-=zz*r1;
  n2-=zz*r2;
  n3-=zz*r3;
  while(1){
    if((r1==0 || n1==0) && (r2==0 || n2==0) && (r3==0 || n3==0)) break;
    if(r1>n1){
      money-=(r1-n1)*p1;
      n1=r1;
    }
    if(r2>n2){
      money-=(r2-n2)*p2;
      n2=r2;
    }
    if(r3>n3){
      money-=(r3-n3)*p3;
      n3=r3;
    }
    if(money<0){
      cout<<ans;
      return 0;
    }
    n1-=r1;
    n2-=r2;
    n3-=r3;
    ans++;
  }
  ans+=money/(r1*p1+r2*p2+r3*p3);
  cout<<ans;
  return 0;
}