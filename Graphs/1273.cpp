#include <bits/stdc++.h>
using namespace std;
int main(){
   int n , ind ;
   cin >> n >> ind;
   int arr[n];
   for(int i = 1 ; i < n ; i++){
       cin >> arr[i];
   }
   int pos = 1;
   for(int i = 0 ; pos < ind ; i++){
       pos = pos + arr[pos];
   }
   cout << (pos == ind ? "YES" : "NO");
    return 0;
}