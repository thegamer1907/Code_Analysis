// IN THE NAME OF ALLAH
#include <math.h>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <cstring>

#define F first
#define S second
#define mp make_pair

using namespace std;
typedef long long ll;

const int N = 1e7 + 10  , L = 20 , MOD = 1e9 + 7 , P = 727;
const ll inf = 2e18 + 10;

int D[N] , A[N] , B[N] , C[N];
int F(long long t){ return (t%MOD); }
int main(){
      int n;
      cin>>n;
      A[1] = B[1] = C[1] = 1;
      for(int i = 2 ; i <= n ; i++){
            C[i] = F(F(D[i-1] + A[i-1]) + B[i-1]);
            D[i] = F(F(A[i-1] + B[i-1]) + C[i-1]);
            B[i] = F(F(D[i-1] + C[i-1]) + A[i-1]);
            A[i] = F(F(D[i-1] + C[i-1]) + A[i-1]);
      }
      cout<<D[n];
      return 0;
}