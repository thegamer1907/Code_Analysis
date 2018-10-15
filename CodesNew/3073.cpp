#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <iomanip>
#include <climits>
#include <tuple>
#include <cassert>

using namespace std;

#define ALL(a) a.begin(), a.end()
#define pii pair<int, int>
#define len(a) (int)a.size()
#define PB push_back
#define EB emplace_back

typedef  long long ll;

class DSU {
private:
	vector<int> ids;
	vector<int> h;
public:
	DSU(int n) {
		ids.resize(n);
		h.resize(n);
		for (int i = 0; i < n; i++) {
			ids[i] = i;
			h[i] = 1;
		}
	}
	int getRoot(int ind) {
		if (ids[ind] != ind)return getRoot(ids[ind]);
		return ind;
	}
	bool connected(int ind1, int ind2) {
		return getRoot(ind1) == getRoot(ind2);
	}
	void connect(int ind1, int ind2) {
		if (connected(ind1, ind2))return;
		int r1 = getRoot(ind1);
		int r2 = getRoot(ind2);
		if (h[r1] > h[r2]) {
			ids[r2] = r1;
			h[r1] += h[r2];
		}
		else {
			ids[r1] = r2;
			h[r2] += h[r1];
		}
	}
	void showId(int n) {
		for (int i = 0; i < n; i++) {
			printf("%d ", ids[i]);
		}
		printf("\n");
	}
};

ll gcd(ll a, ll b) {
	while (b != 0) {
		ll t = a % b;
		a = b;
		b = t;
	}
	return a;
}

ll lcd(ll a, ll b) {
	return a / gcd(a, b)*b;
}

int sgn(int n) {
	if (n < 0)return -1;
	if (n > 0)return 1;
	return 0;
}

int const MOD = 1000000007;

int modS(int a, int b) {
	return (a + b) % MOD;
}

int main() {
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	
	int k;
	scanf("%d\n", &k);
	char buff[1000005];
	scanf("%1000000s", buff);
	string str = buff;
	vector<int > ids;
	//   f - index, s - zero counts
	str += '1';
	int n = len(str);
	int cunt = 0;
	for(int i = 0; i < n; i++){
		while(i < n && str[i] == '0'){
			i++;
			cunt++;
		}
		ids.EB(cunt);
		cunt = 0;
	}

	ll res = 0LL;


	if(k == 0){
		for(int i = 0; i < len(ids); i++){
			ll subRes = (ids[i] + 1LL)*(ids[i]);
			res += subRes / 2;
		}
	}
	else{
		for(int i = 0; i < len(ids) -k; i++) {
			ll subRes = 0LL;
			if(  ids[i] == 0 ){
				if(ids[i+k] == 0){
					subRes = 1;
				}
				else{
					subRes = ids[i+k] + 1;
				}
			}
			else{
				if(ids[i+k] == 0){
					subRes = ids[i] + 1;
				}
				else{
					subRes = (ids[i] + 1LL)*(ids[i+k] + 1LL);
				}
			}
			res += subRes;
		} 
	}
	printf("%I64d", res);
	return 0;
}