#include <algorithm>
#include <deque>
#include <ios>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <array>
#include <random>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <iomanip>

//In The Need Of GOD
//A_Z ;)

using namespace std;
typedef long long ll;
#define mp make_pair
#define F first
#define S second
#define err(q) cout << #q << " = " << q;

const int N = 1e6 + 60, MOD1 = 1e9 + 7, MOD2 = 1e9 + 9, B = 256;

ll pw1[N], pw2[N], par1[N], par2[N], f[N];
int n;
string a;

void build(){
	pw1[0] = 1;
	pw2[0] = 1;
	for(int i = 1; i <= n + 10; i++){
		pw1[i] = pw1[i-1] * B;
		if(pw1[i] > MOD1) pw1[i] %= MOD1;
		pw2[i] = pw2[i-1] * B; 
		if(pw2[i] > MOD2) pw2[i] %= MOD2;
	}
	par1[1] = (int)(a[0] - 'a' + 1);
	par2[1] = par1[1];
	for(int i = 2; i <= n; i++){
		par1[i] = (par1[i-1] * B + (int)(a[i-1] - 'a' + 1));
		if(par1[i] > MOD1) par1[i] %= MOD1;
		par2[i] = (par2[i-1] * B + (int)(a[i-1] - 'a' + 1));
		if(par2[i] > MOD2) par2[i] %= MOD2;
	}
}

int get1(int l, int r){
	int tmp = par1[r];
	int q = (par1[l-1] * pw1[r - l + 1]) % MOD1;
	tmp = (tmp - q + MOD1) % MOD1;
	return tmp;
}
int get2(int l, int r){
	int tmp = par2[r];
	int q = (par2[l-1] * pw2[r - l + 1]) % MOD2;
	tmp = (tmp - q + MOD2) % MOD2;
	return tmp;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	
	cin >> a;
	n = (int)a.size();
	build();
	
	f[0] = -1;
	int cur = -1;
	for(int i = 1; i <= n; i++){
		while(cur > -1 && a[cur] != a[i-1])
			cur = f[cur];
		cur ++;
		f[i] = cur;
	}
	int ans = f[n];
	if(ans == 0) return cout << "Just a legend", 0;
	int tmp1 = get1(1, ans), tmp2 = get2(1, ans);
	bool flag = false;
	for(int i = 1; i < n; i++){
		if(i + ans >= n) break;
		int tmp3 = get1(i+1, i + ans), tmp4 = get2(i+1, i + ans);
		if(tmp3 == tmp1 && tmp4 == tmp2) flag = true;
	}
	if(flag == true){
		for(int i = 0; i < ans; i++) cout << a[i];
		return 0;
	}
	ans = f[ans];
	if(ans == 0) return cout << "Just a legend", 0;
	for(int i = 0; i < ans; i++) cout << a[i];
	return 0;
}