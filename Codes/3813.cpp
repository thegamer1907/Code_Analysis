#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <limits>
#include <tuple>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <string>
#include <fstream>
#define REP(k,a) for(int k=0; k < (a); ++k)
#define REPP(k,a,b) for(int k= (a); k < (b); ++k)
#define INF 200000000
#define mp make_pair
#define len(s) (int)((s).size())
#define pb push_back
#define all(X) (X).begin(), (X).end()
#define DRI(X) int (X); scanf("%d", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)

using namespace std;
typedef long long ll;
typedef unsigned int uint;
using vi = vector<int>;
using vii = vector<vector<int>>;
using pii = pair<int,int>;
template <class T>
void print(vector<T> v){ bool first=true; for(T x : v) { if(!first) cout << " "; first = false; cout << x; } cout << endl;}
ll calc(ll x, int c[3],int n[3], int p[3]){
  ll ans = 0;
  REP(i,3){
    ans += (max(0ll,x*c[i]-n[i]))*p[i];
  }
  return ans;
}

ll bin_search(ll low, ll high, int c[3], int n[3], int p[3],ll r){
  if(low == high) return low;
  ll mid = (low+high+1)/2;
  ll val = calc(mid, c, n,p);
  if(val <= r){
    return bin_search(mid, high, c, n,p, r);
  }else{
    return bin_search(low, mid-1, c,n,p,r);
  }
}
int main(){
  string s;
  cin >> s;
  int C[3] = {0,0,0};
  for(char& c : s){
    if(c == 'B')
      C[0]++;
    if(c == 'S')
      C[1] ++;
    if(c == 'C')
      C[2]++;
  }
  int n[3];
  cin >> n[0] >> n[1] >> n[2];
  int p[3];
  cin >> p[0] >> p[1] >> p[2];
  ll r;
  cin >> r;
  cout << bin_search(0, r+200,C,n,p,r) << endl;
  return 0;
}
