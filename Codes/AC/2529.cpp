#include <bits/stdc++.h>
using namespace std;

const int N = 10000002;
long long ans[N];
bool p[N];
int c[N];
int n, x;

int main(){

   scanf("%d", &n);
   for(int i = 1; i <= n; ++i){
      scanf("%d", &x);
      c[x] += 1;
   }
   
   for(int i = 4; i <= 10000000; i += 2) p[i] = 1;
   for(int i = 3; i*i <= 10000000; i += 2)
      if(not p[i])
         for(int j = i*i; j <= 10000000; j += i+i)
            p[j] = 1;

   for(int i = 2; i <= 10000000; ++i){
      if(not p[i])
         for(int j = i; j <= 10000000; j += i)
            ans[i] += c[j];

      ans[i] += ans[i-1];
   }

   int m, l, r;
   scanf("%d", &m);
   while(m--){
      scanf("%d %d", &l, &r);

      printf("%lld\n", ans[min(r, 10000000)] - ans[min(l-1, 10000000)]);
   }



   return 0;
}
