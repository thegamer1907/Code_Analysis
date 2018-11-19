#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pll;
const int maxn=2e5+1;
const ll INF=1e15+7;
const ld EPS=1e-9;
ll dp[21][maxn];
int cnt[maxn];
int a[maxn];
int cl=1,cr=0;
ll cur_cost=0;
void slide(int l,int r){
    while(cl>l){
        --cl;
        cur_cost+=cnt[a[cl]];
        ++cnt[a[cl]];
    }
    while(cr<r){
        ++cr;
        cur_cost+=cnt[a[cr]];
        ++cnt[a[cr]];
    }
    while(cl<l){
        --cnt[a[cl]];
        cur_cost-=cnt[a[cl]];
        ++cl;
    }
    while(cr>r){
        --cnt[a[cr]];
        cur_cost-=cnt[a[cr]];
        --cr;
    }
}
void calc(int i,int l,int r,int L,int R){ // L,R are in [1,n] l,r are in [1,n]
    if (l>r)
        return;
    L=max(L,0);

    int m=(l+r)>>1;
    dp[i][m]=INF;
  //  cout<<i<<" "<<l<<" "<<r<<" "<<L<<" "<<r<<" "<<m<<endl;
    int ind=-1;
    for(int j=L; j<=min(R,m-1); ++j){
        slide(j+1,m);
      //  cout<<"cost "<<j+1<<" "<<m<<" "<<cur_cost<<endl;
        if (cur_cost+dp[i-1][j]<dp[i][m]){
            dp[i][m]=cur_cost+dp[i-1][j];
            ind=j;
        }
    }
   // cout<<"res "<<ind<<endl;
    calc(i,l,m-1,L,ind);
    calc(i,m+1,r,ind,R);
}
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; ++i)
        cin>>a[i];

    for(int i=1; i<=n; ++i){
        slide(1,i);
        dp[1][i]=cur_cost;
     //   cout<<i<<" "<<cur_cost<<endl;
    }
    for(int i=2; i<=k; ++i)
        calc(i,1,n,1,n);
    cout<<dp[k][n];
}

