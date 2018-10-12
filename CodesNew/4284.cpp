#include<iostream>
#include<cstdio>
#include<ctime>
#include<algorithm>
#include<cstring>
//#include<bits/stdc++.h>
#define lowbit(x) (x)&(-(x))
#define all(x) x.begin(),x.end()
#define iis std::ios::sync_with_stdio(false)
#define mme(a,b) memset((a),(b),sizeof((a)))
#define lson rt<<1
#define rson rt<<1|1
using namespace std;
typedef long long LL;
typedef unsigned long long uLL;
const int MXN = 5e5+7;
const int INF = 0x3f3f3f3f;
const LL INFLL = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

int n, m;
string ar[MXN];
int main(){
#ifndef ONLINE_JUDGE
    freopen("E://ADpan//in.in", "r", stdin);
    //freopen("E://ADpan//out.out", "w", stdout);  
#endif
  int tc = 0;
  iis;
  cin>>n;
    for(int i = 0; i < n; ++i){
      cin >> ar[i];
    }
    for(int i = n - 2; i >= 0; --i){
      if(ar[i+1] < ar[i]){
        int cnt = 0, len = min(ar[i+1].length(), ar[i].length());
        for(int j = 0; j < len; ++j){
          if(ar[i+1][j]==ar[i][j])cnt++;
          else break;
        }
        ar[i] = ar[i].substr(0,cnt);
      }
    }
    for(int i = 0; i < n; ++i){
      cout<<ar[i]<<"\n";
    }
  
  return 0;
}

