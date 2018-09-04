#include<iostream>
#include<cstdio>
#include<ctime>
#include<algorithm>
#include<cstring>
//#include<bits/stdc++.h>
#define lowbit(x) (x)&(-(x))
#define all(x) x.begin(),x.end()
#define mme(a,b) memset((a),(b),sizeof((a)))
#define lson rt<<1
#define rson rt<<1|1
using namespace std;
typedef long long LL;
typedef unsigned long long uLL;
const int MXN = 1e5+7;
const int INF = 0x3f3f3f3f;
const LL INFLL = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

int n, m;
std::vector<int> ar[MXN];
int is[MXN];
int main(){
  int tc = 0;
  while(~scanf("%d%d", &n, &m)){
    for(int i = 0; i < n; ++i){
      ar[i].resize(m);
      is[i]= INF;
      for(int j = 0; j < m; ++j){
        scanf("%d", &ar[i][j]);
      }
    }
    for(int j = 0, flag; j < m; ++j){
      flag = is[0] = 0;
      for(int i = 1; i < n; ++i){
        if(ar[i][j] >= ar[i-1][j]){
          is[i] = min(flag,is[i]);
        }else {
          flag = i;
          is[i] = min(flag,is[i]);
        }
      }
    }
    /*for(int i = 0; i < n; ++i){
      printf("%d ", is[i]);
    }
    printf("\n");*/
    int q;scanf("%d", &q);
    while(q--){
      int u,v;scanf("%d%d", &u, &v);
      int tmp = is[v-1];
      //printf("%d %d %d\n", u,v,tmp);
      if(u - 1 >= tmp){
        printf("Yes\n");
      }else{
        printf("No\n");
      }
    }
  }
  return 0;
}

