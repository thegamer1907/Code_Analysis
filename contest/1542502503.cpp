#include<iostream>
  #include<string>
  #include<algorithm>
  #include<cstdio>
  #include<cstring>
  #include<cstdlib>
 #include<cmath>
  using namespace std;
  typedef long long s64;

 const int ONE = 100005;
 const int MOD = 1e9 + 7;
 const s64 INF = 1e18;
 int get()
 {
         int res = 1, Q = 1; char c;
         while( (c = getchar()) < 48 || c > 57)
             if(c == '-') Q = -1;
         if(Q) res = c - 48;
         while( (c = getchar()) >= 48 && c <= 57)
             res = res * 10 + c - 48;
         return res * Q;
 }

 int n, k;
 int a[ONE], cnt[ONE];

 s64 record[ONE], f[ONE], value;
 int now_l, now_r;


 void Move(int l, int r)
 {
         while(now_r < r) cnt[a[++now_r]]++, value += cnt[a[now_r]];
         while(l < now_l) cnt[a[--now_l]]++, value += cnt[a[now_l]];
         while(now_r > r) value -= cnt[a[now_r]], cnt[a[now_r--]]--;
         while(l > now_l) value -= cnt[a[now_l]], cnt[a[now_l++]]--;
 }

 void Solve(int l, int r, int L, int R) //j=l~r, from = L~R
 {
         if(l > r) return;
         int mid = l + r >> 1, MidFrom;
         s64 Ans = INF;
         for(int from = L; from <= R; from++)
         {
             if(from >= mid) break;
             Move(from + 1, mid);
             if(f[from] + value < Ans)
                 Ans = f[from] + value, MidFrom = from;
         }
         record[mid] = Ans;
         Solve(l, mid - 1, L, MidFrom);
         Solve(mid + 1, r, MidFrom, R);
 }

 int main()
 {
         n = get();    k = get();
         for(int i = 1; i <= n; i++)
             a[i] = get();
         for(int i = 0; i <= n; i++) f[i] = INF;
         f[0] = 0;
         for(int j = 1; j <= k; j++)
         {
             for(int i = 1; i <= n; i++) cnt[i] = -1;
             now_l = now_r = 1; value = 0, cnt[a[1]] = 0;
             Solve(1, n, 0, n - 1);
             for(int i = 1; i <= n; i++)
                 f[i] = record[i], record[i] = 0;
       }
       printf("%lld", f[n]);
 }

