#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 5, M = 4e5 + 5, OO = 0x3f3f3f3f;

int n, A[N];

bool ok(long long x){
  long long sum = 0;
  for(int i = 0 ; i < n ; ++i){
    sum += x-A[i];
    if(A[i] > x)  return 0;
  }
  return sum >= x;
}

long long binarySearch(){
  long long lo = 0, med, hi = 2e9;
  while(lo<hi){
    med = (lo+hi)>>1;
    if(ok(med)) hi = med;
    else  lo = med+1;
  }
  return lo;
}


int main(){
  scanf("%d", &n);
  for(int i = 0 ; i < n ; ++i)  scanf("%d", A+i);
  printf("%lld\n", binarySearch());
  return 0;
}
