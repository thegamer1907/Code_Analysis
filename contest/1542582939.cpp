#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <cstring>
#include <unordered_set>
using namespace std;
typedef long long ll;
const int maxn = 105;

int a[16],c[4];
bool checkH(int mask,int m){
  memset(c,0,sizeof(c));
  int cnt=0;
  for(int i=0;i<(1<<m);i++){
    if(mask&(1<<i)){
      cnt++;
      if(a[i]==0)return false;
      for(int j=0;j<m;j++)if(i&(1<<j))c[j]++;
    }
  }
  for(int i=0;i<m;i++)if(c[i]+c[i]>cnt)return false;
  return true;
}
bool check(int m){
  for(int i=1;i<(1<<(1<<m));i++){
    if(checkH(i,m))return true;
  }
  return false;
}

int main() {
#ifdef suiyuan2009
  freopen("in.cpp","r",stdin);
#endif
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    int x=0;
    for(int j=0;j<m;j++){
      int y;
      cin>>y;
      if(y)x|=(1<<j);
    }
    a[x]++;
  }
  if(check(m))cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}
