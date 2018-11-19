#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<vector>
#include<string>
#include<functional>            
#include<fstream>
#include<ctime>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> point;
typedef pair<int, int> pii;
const ll inf = 9.2e18;
const int maxn = 107;
const int INF = 2.1e9;
const int MOD = 1e9 + 7;
const double dif = 1e-7;
const double PI = acos(-1.0);

int n, m, k;

int vis[maxn];

int main(){
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	while (cin >> n >> k){
		memset(vis, 0, sizeof(vis));
		for (int i = 0; i < n; i++){
			int x = 0;
			for (int j = 0; j < k; j++){
				int d;
				cin >> d;
				if (d == 1) x |= (1 << j);
			}
			vis[x]++;
		}

		int flag = 0;
		for (int i = 0; i < (1 << k); i++){
			for (int j = 0; j < (1 << k); j++){
				if (vis[i] && vis[j] && ((i&j) == 0)){
					flag = 1;
					break;
				}
			}
		}

		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}