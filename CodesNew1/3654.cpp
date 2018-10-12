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

multiset<int> a;
int main() {
	int n,m,x;
	scanf("%d%d",&n,&m);
	int r2 = 0;
	while(n--){
		scanf("%d",&x);
		a.insert(x);
		r2 = max(r2, x + m);
	}
	while(m--){
		int x = *a.begin();
		a.erase(a.begin());
		a.insert(x+1);
	}
	auto tmp = a.end();
	--tmp;
	printf("%d %d\n",*tmp,r2);

	return 0;
}