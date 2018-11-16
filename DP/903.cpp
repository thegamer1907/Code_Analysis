#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long int ll;

int main(){
  int n, s=0;
  int maxF=-2, maxA=0;
  scanf("%d", &n); int a[n];

  for(int i=0;i<n;i++){
    scanf("%d", &a[i]); s += a[i];
    int aux = a[i] ? -1 : 1;
    maxA = maxA + aux;
    if(maxF < maxA) maxF = maxA;
    if(maxA < 0) maxA = 0;
  }
  printf("%d\n", s+maxF);
}  