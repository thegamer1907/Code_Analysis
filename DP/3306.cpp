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

string s;
const ll MAXN = 1000010;
bool usen[MAXN];
ll f[MAXN], k, n;

int main(){ _
   cin>>s;
   n =  (int) s.size();
   k = f[0] = f[1] = 0;
   FOR(i, 1, n){
      while(k > 0 && s[i] != s[k]) k = f[k];
      if(s[i] == s[k]) k++;
      f[i + 1] = k;
      if(i < n - 1) usen[k] = 1;
   }
   k = f[n];
   while(k > 0 && !usen[k]) k = f[k];
   if(k > 0){
      FOR(i, 0, k){
         cout << s[i];
      }
   }
   else{
      cout << "Just a legend";
   }
   return 0;
}
