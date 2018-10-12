#include<bits/stdc++.h>
using namespace std;
int a[500009];
int F[500009];
main(){
     int n;
     cin >> n;
     for(int i = 1; i <= n; i++){
          scanf("%d",&a[i]);
     }
     sort(a + 1, a + n + 1);
     int lo = 0, hi = n / 2;
     while(lo < hi){
          int mid = (lo + hi + 1) / 2;
          bool fl = 1;
          for(int i = 1; i <= mid; i++){
               if(a[i] * 2 > a[n - mid + i]) fl = 0;
          }
          if(fl) lo = mid;
          else hi = mid - 1;
     }
     cout << n - lo << endl;
}
