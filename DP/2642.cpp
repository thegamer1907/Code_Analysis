#include <bits/stdc++.h>
using namespace std;
 
#define fio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define mem(x, y) memset(x, y, sizeof x);
#define fi first
#define se second
#define pb push_back
#define pii pair<int , int> 
#define asdfg y1
#define int long long
#define double long double
 
/*-----------------------------------------------------------------------*/

#define TRACE
 
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
      cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
      const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif
 
/*-----------------------------------------------------------------------*/
 
const int maxn = (int)2010;
const double EPS = 1e-9;
const int INF = 1e18 + 18;
const int MOD = (int)1e9 + 7;
int k;
set<int> v;
map<int , int> mp;

void solve(int x , int sum , int digits){
	if(sum > 10) return;
	if(digits >= 9) return;
	if(sum == 10){
		v.insert(x);
		int t = x;
		while(t < 10800100){
			t *= 10;
			v.insert(t);
		}
		return;
	}
	
	for(int i = 0; i <= 9; i++){
		solve(10 * x + i , sum + i , digits + 1);
	}
}

signed main(){ 
             
       fio;
       cin >> k;
       solve(0 , 0 , 0);
       
	
         int idx = 1;
	for(int x : v){
		//cout << x << endl;
       		if(idx == k){
       			cout << x << endl;
       			return 0;
       		}
       	idx++;
	}

       
       


       return 0;
}  