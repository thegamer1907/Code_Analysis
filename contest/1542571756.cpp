#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10000000000

using namespace std;
struct mystruct{
  long long v;
  mystruct * next;
};
int structcmp(const void *v1,const void *v2){return ((mystruct *)v1)->v - ((mystruct *)v2)->v;}
int intcmp(const void *v1,const void *v2){return *(int *)v1-*(int *)v2;}
long long minn(long long v1,long long v2){return v1<v2?v1:v2;}
long long maxx(long long v1,long long v2){return v1>v2?v1:v2;}

long long v[100010]={0};
long long cnt[100010]={0};
long long dp[100010][30]={0};

int n,k;

static long long cost(int l,int r){
  static int _l = 0;
  static int _r = -1;
  static long long _ans = 0;
  while(_r < r) _ans += cnt[v[++_r]]++;
  while(_l > l) _ans += cnt[v[--_l]]++;
  while(_r > r) _ans -= --cnt[v[_r--]];
  while(_l < l) _ans -= --cnt[v[_l++]];
  // cout<<"["<<_l<<","<<_r<<"]"<<_ans<<endl;
  return _ans;
}

// dp[len][k] = min{ dp[j][k-1] + cost[j -> len] }
// [0 -> lastdiv - 1] with kk-1
// [0 -> j-1] + [j -> lastdiv - 1]
// dp[j][kk-1] + cost(j,lastdiv - 1),,,,j>=kk-1

// if divide k at j has min when (k-1) at m
// then any k at >j has min when (k-1) at >m
//
// [___________m_____j+++++++++++++++] min
// [_______n___m_____j_____p+++++++++]
// [_______n_______________p+++++++++]
//
// cost(p,n) = cost(j,n) + V_(p,n,j->p)
// cost(p,m) = cost(j,m) + V_(p,m,j->p)
//
// cost(j,n)>=cost(j,m) && V_(p,n,j->p) >= V_(p,m,->p)
//
// cost(p,n) >= cost(p,m)

void solve(const int & kk,int l,int r,int mathl,int mathr){
  // cout<<"---------------:"<<l<<" "<<r<<" "<<mathl<<" "<<mathr<<" "<<endl;
  if(l > r)
    return ;
  int j = (l+r)/2;
  int min_pos = mathl;
  dp[j][kk] = MAX;
  int maxi = minn(j,mathr);
  int starti = maxx(kk-1,mathl);
  int i;
  for(i=starti;i<=maxi;i++){
    long long newv = dp[i][kk-1] + cost(i,j-1);
    // cout<<l<<" "<<r<<" "<<j<<" "<<i<<" "<<newv<<endl;
    if(newv < dp[j][kk]){
      dp[j][kk] = newv;
      min_pos = i;
    }
  }
  solve(kk, l  , j-1, mathl  , min_pos);
  solve(kk, j+1, r  , min_pos, mathr);
}

int main(){
  cin>>n>>k;
  int i,j,o;
  for(i=0;i<n;i++)
    scanf("%lld",&v[i]);

  dp[0][1] = 0;
  for(i=1;i<=n;i++)dp[i][1] = cost(0,i-1);

  for(i=2;i<=k;i++)
    solve(i,1,n,1,n);
  cout<<dp[n][k]<<endl;

  return 0;
}


/* time limit
int main(){
  cin>>n>>k;
  int i,j,o;
  for(i=0;i<n;i++)
    scanf("%lld",&v[i]);

  dp[0][1] = 0;
  for(i=1;i<=n;i++)dp[i][1] = cost(0,i-1);

  for(i=2;i<=k;i++){
    for(j=i;j<=n;j++){
      dp[j][i] = MAX;
      for(o=i-1;o<n;o++)
        dp[j][i] = minn(dp[j][i],dp[o][i-1]+cost(o,j-1));
    }
  }
  cout<<dp[n][k]<<endl;

  return 0;
}
*/

/* near but wrong
long long costn(long long n){
  return (n-1)*n/2;
}
long long cost[100010]={0};
void init(){
  int i;
  for(i=0;i<=100000;i++)
    cost[i]=costn(i);
}

int n,k;
long long ans = 0;

long long v[100010]={0};
long long cnt[100010]={0};
long long cntnow[100010]={0};

int divk[30]={0}; // return index

void clear(){
  int i;
  for(i=0;i<=n;i++){
    cnt[i]=0;
    cntnow[i]=0;
  }
}

bool doaj(int index){
  clear();
  int l = index == 0?0:divk[index-1]+1;
  int r = index == k-1?n-1:divk[index+1];
  // cout<<index<<":"<<l<<","<<r<<endl;
  int i;
  for(i=l;i<=r;i++){
    cnt[v[i]]++;
    // cout<<v[i]<<" "<<cnt[v[i]]<<endl;
  }

  int ansi = l;
  long long dermin = 100000000000;
  long long dernow = 0;
  long long derori = 100000000000;
  for(i=l;i<r;i++){
    cntnow[v[i]]++;
    long long oril = cntnow[v[i]]-1;
    long long orir = cnt[v[i]] - oril;
    long long oriv = cost[oril]+cost[orir];

    long long nowl = oril+1;
    long long nowr = orir-1;
    long long nowv = cost[nowl]+cost[nowr];

    dernow += -oriv+nowv;
    if(i == divk[index]){
      derori = dernow;
    }
    if(dernow < dermin || (dernow==dermin && i==divk[index])){
      dermin = dernow;
      ansi = i;
    }
  }
  if(dermin < derori){
    if(ansi != divk[index]){
      // cout<<index<<": ["<<l<<","<<r<<"]"<<"der:"<<dermin-derori<<" | "<<divk[index]<<" -> "<<ansi<<endl;
      divk[index] = ansi;
      ans += dermin-derori;
      return true;
    }
  }
  return false;
}

int main(){
  init();
  cin>>n>>k;
  k--;
  int i;
  for(i=0;i<n;i++)
    scanf("%lld",&v[i]);

  for(i=0;i<k;i++)
    divk[i]=i;

  for(i=k;i<n;i++){
    cnt[v[i]]++;
  }

  for(i=1;i<=n;i++){
    ans += cost[cnt[i]];
  }

  bool adjust=true;

  while(adjust){
    adjust=false;
    for(i=0;i<k;i++){
      if(doaj(i))
        adjust=true;
    }
  }

  cout<<ans<<endl;
  return 0;
}*/
