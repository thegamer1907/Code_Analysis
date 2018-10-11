#include <bits/stdc++.h>

using namespace std ;
typedef long long ll;

int a[100001];

int main()
{
  int n , t;
  scanf("%d %d" , &n ,&t);

  for (int i = 0 ; i < n ; ++i)
      scanf("%d" , &a[i]);
  
  int l = 0 ,  r = 0 , sum = a[0] , res = 0;

  while( l < n && r < n){
     if ( l > r){
       r++;
       sum += a[r];
       continue;
     }

     if ( sum > t){
       sum -= a[l];
       l++;
     }
     else{
       res = max(res , r-l+1);
       r++;
       if (r != n)
          sum += a[r];
     }
  }

  cout << res;
  
    
 
}
    

  

