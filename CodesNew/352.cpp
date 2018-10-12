#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, t;
   ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
   cin >> n >> t;
   vector<long long> S(n + 1);
   for(int i = 1; i <= n; ++i)
   {
       cin >> S[i];
       S[i] += S[i-1];
   }
   int maxo = 0;
    for(int i = 0; i < n; ++i)
   {
       int hi = n, lo = i, mid = (hi+lo)/2;
       long long dis;
       while(lo <= hi)
       {
           dis  = S[mid] - S[i];
           //cout << lo << " " << mid << " " << hi << endl;
           if(dis > t){hi = mid - 1; mid = (hi+lo)/2;}
           else {lo = mid + 1; mid = (hi+lo)/2;}
       }
       if(mid - i > maxo)maxo  = mid - i;
   }
   cout << maxo;
}
