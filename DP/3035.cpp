// hi

# include <bits/stdc++.h>

using namespace std;

typedef long long lin;
typedef long double ld;
typedef pair < int, int > pii;

const int N = int(5e5) + 5;
const int inf = (int)1e9 + 7;

# define int lin

int n;
int d[2][5];

main(){
  scanf("%d", &n);
  d[0][4] = 1;
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= 4; ++j){
      d[i % 2][j] = 0;
      for(int k = 1; k <= 4; ++k){
        if(j != k){
          d[i % 2][j] += d[(i % 2) ^ 1][k];
          if(d[i % 2][j] > inf){
            d[i % 2][j] -= inf;
          }
        }
      }
    }
  }
  printf("%d", d[n % 2][4]);
  return 0;
}