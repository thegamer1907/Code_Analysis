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
#include<cstring>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cstdio>
#include <cmath>
#include <bitset>

#define F first
#define S second
#define mp make_pair
#define L(x) (2*(x))
#define R(x) ((2*(x))+1)
#define pii pair<int , int>

using namespace std;
typedef long long ll;

const int N = 2e6 + 10 , MOD = 1e9 + 7 , MAXN = 1e5 , LG = 20 , M = 1e9 , P = 727 , Sq = 100;
const ll inf = 1e18 + 10;

bool check(int n){
      int sum = 0;
      while(n)
            sum += (n % 10), n /= 10;
      if(sum == 10)
            return 1;
      return 0;
}
int main(){
      int k; cin >> k;
      int t = 0;
      for(int i = 1; ;i++){
            if(check(i))
                  t++;
            if(t == k)
                  return cout<<i, 0;
      }
}
