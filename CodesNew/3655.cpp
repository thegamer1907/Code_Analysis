#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define ll long long
#define pq priority_queue
#define mii map<int,int>

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef set<int> si;
typedef vector<vi> vii;
typedef vector<ii> vpi;
typedef vector<ll> vll;
int oo = (1e9) + 7;
ll oo2 = 1ll*oo*oo;

int main() {
	int n, m;
	cin >> n >> m;

	vi v(n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
	}
	int tmp = m;
	sort(v.begin(), v.end());
	int maior = v[n-1];
	if(n == 1) return printf("%d %d", v[0] + m, v[0] + m), 0;
	while(tmp) {
		if(v[1] - v[0] + 1 <= tmp) {
			tmp = tmp - (v[1] - v[0] + 1);
			v[0] = v[1] + 1;
		} else {
			v[0] += tmp;
			tmp = 0;
		}
		sort(v.begin(), v.end());
	}
	cout << v[n-1] << " " << maior + m;

	return 0;
}