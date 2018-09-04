#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int inf=2e9+1e8+1234;
const LL linf=8e18+9e17;
const int N = 5e5+7;
int n, ar[N];
LL pre[N], suf[N];
std::vector<int> a, b;
unordered_map<int,int>mp;
int main(int argc, char const *argv[]){
  while(~scanf("%d", &n)){
    LL sum = 0;
    for(int i = 1; i <= n; ++i){
      scanf("%d", &ar[i]);
      sum += ar[i];
    }
    a.clear();b.clear();
    pre[0] = suf[n + 1] = 0;
    for(int i = 1, j = n; i <= n; ++i, --j){
      pre[i] = pre[i - 1] + ar[i];
      if(pre[i]*3 == sum)a.push_back(i);
      suf[j] = suf[j + 1] + ar[j];
      if(suf[j]*3 == sum)b.push_back(j);
      //printf("%lld %lld %d\n", pre[i], suf[j], ar[j]);
    }
    //printf("size = %d\nsize = %d\n", a.size(), b.size());
    int len = b.size();
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    LL ans = 0;
    for(auto x: a){
      int p = lower_bound(b.begin(), b.end(), x + 1) - b.begin();
      if(b[p] == x + 1) p++;
      ans += max(len - p, 0);
      //printf("*%d %d %lld %d\n", x, b[p], ans, len);
    }
    printf("%lld\n", ans);
  }
  return 0;
}