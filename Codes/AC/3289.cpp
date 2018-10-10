#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <string.h>
using namespace std;

#define pb push_back
#define ll long long
#define F first
#define S second
#define PI acos(-1)
#define EPS 1e-9
#define BASE 53ll
#define ld double
#define MAX 1000000000
#define NIL 0
#define INF 1e15
#define infi 1e16
#define rd(a) scanf("%d",&a)
#define rd2(a,b) scanf("%d %d",&a,&b)
#define rd3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define rdll(a) scanf("%I64d",&a)
#define sz(a) (int) a.size()
#define lp(i,a,n) for(int i=(a); i<=(n) ; ++i)
#define lpd(i,n,a) for(int i=(n); i>=(a) ; --i)
#define pi acos(-1)
#define lc (x << 1)
#define rc (x << 1 | 1)

typedef complex<double>CX;
typedef pair<ll,ll>ii;
typedef pair<ll,ii>jj;
typedef pair<vector<int>,int>vii;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int N=200005;


ll mod=1000000007;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
bool is_vowel(char c){if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return 1;return 0;}
ld getDistance(ld x1,ld y1,ld x2,ld y2){return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));}
ll extended_euclidean(ll a,ll b,ll &x,ll &y){if(b==0){x=1;y=0;return a;}ll g = extended_euclidean(b,a%b,y,x);y -= (a/b)*x;return g;}
ll power(ll base,ll p){if(p==1)return base;if(!p)return 1ll;ll ret=power(base,p/2);ret*=ret;ret%=mod;if(p&1)ret*=base;return ret%mod;}
ii vec(ii a,ii b){ii ret=ii(a.F-b.F,a.S-b.S);return ret;}
ll getArea(ii a,ii b,ii c){ii x=vec(a,b);ii y=vec(c,b);return abs(x.F*y.S-x.S*y.F);}

string A,B;
int a,b,c,d,k;
int dp[10][2][2][2];
int luckyCnt(int idx,bool x,bool y,bool is){
     if(idx==A.length())return is;
     if(dp[idx][x][y][is]!=-1)return dp[idx][x][y][is];
     int ret=0;
     lp(i,0,9){
         bool tmp1=x,tmp2=y,tmp3=is;
         if(i>B[idx]-'0'&&tmp2==0)break;
         if(i<A[idx]-'0'&&tmp1==0)continue;
         if(i<B[idx]-'0')tmp2=1;
         if(i>A[idx]-'0')tmp1=1;
         if(i==7)tmp3=1;
         ret+=luckyCnt(idx+1,tmp1,tmp2,tmp3);
     }
     return dp[idx][x][y][is]=ret;
}
void zbt(int a,int b){
   A=to_string(a);
   B=to_string(b);
   while(A.length()!=B.length())
     A="0"+A;
}
bool islucky(int a){
   while(a){
      if(a%10==7||a%10==4)return 1;
      a/=10;
   }
   return 0;
}
int solve(int start,int fini){

}

int main(){
   // freopen("test.in","r",stdin);
  // zbt(1,1000000000);
  // memset(dp,-1,sizeof(dp));
  // cout<<luckyCnt(0,0,0,0);
  // cin>>a>>b>>c>>d>>k;
   int n,mn=1e9,idx=0;
   cin>>n;
   lp(i,1,n){
      cin>>a;
      a-=(i-1);
      if(a<=0){
            mn=min(mn,i-1);
            if(mn==i-1)idx=i;
      }
      else{
          int sum=i-1 + (a/n)*n;
          a%=n;
          if(a)sum+=n;
          mn=min(mn,sum);
          if(mn==sum)idx=i;
      }
   }
   cout<<idx;
   return 0;
}
