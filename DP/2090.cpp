#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <utility>
#include <vector>

#define PI 3.141592653589793
#define EPS 0.000000001
#define INF 1000000000

#define _ ios_base::sync_with_stdio(0), cin.tie(0), cin.tie(0), cout.tie(0), cout.precision(15);
#define FOR(i, a, b) for(int i=int(a); i<int(b); i++)
#define RFOR(i, a, b) for(int i=int(a)-1; i>=int(b); i--)
#define FORC(cont, it) for(typeof((cont).begin()) it = (cont).begin(); it != (cont).end(); it++)
#define RFORC(cont, it) for(typeof((cont).rbegin()) it = (cont).rbegin(); it != (cont).rend(); it++)
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef set<int> si;
typedef set<ll> sll;


#define MAXN 1000005
#define MOD 1000000007

int dp[MAXN];
int nums[MAXN];

int main(){ _
   si numeros;
   int N, M;;
   cin >> N >> M;
   FOR(i, 0, N){
      cin >> nums[i];
   }
   numeros.insert(nums[N - 1]);
   dp[N - 1] = 1;
   for(int i = N - 2; i >= 0; i--){
      if(numeros.count(nums[i]) == 0){
         numeros.insert(nums[i]);
         dp[i] = dp[i + 1] + 1;
      }
      else{
         dp[i] = dp[i + 1];
      }
   }
   FOR(i, 0, M){
      int l;
      cin >> l; l--;
      cout << dp[l] << endl;
   }
   return 0;
}
