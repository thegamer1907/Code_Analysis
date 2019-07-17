#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fs first
#define sc second
#define mk make_pair
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
const int MAKS = 300100;
const int MOD = 1e9 + 7;
const int INF = 1e9+1;
unordered_map < ll, ll > bit;
struct point{
	ll x, y;
};
bool cmp(point a, point b){
	if (a.y == b.y) return a.x < b.x;
	return a.y > b.y;
}
void update(ll x){
	while(x < INF){
		bit[x]++;
		x += x&(-x);
	}
	return;
}
point p[MAKS];
int n;
ll ans;
int query(ll x){
	int ans = 0;
	while(x > 0){
		ans += bit[x];
		x -= x&(-x);
	}
	return ans;
}
unordered_map < ll , int > mapp;
unordered_map < ll, vector < ll > > lst;
vector < ll > vec;
int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%lld%lld", &p[i].x, &p[i].y);
		if (mapp[p[i].y]==0){
			mapp[p[i].y] =1;
			vec.pb(p[i].y);
		}
		lst[p[i].y].pb(p[i].x);
	}
	sort(vec.begin(), vec.end());
	reverse(vec.begin(), vec.end());
	for (ll y : vec){
		sort(lst[y].begin(), lst[y].end());
		int size = lst[y].size();
		for (int i= 0; i < size; i++){
			ll now = lst[y][i];
			if (query(now)-query(now-1)==0) update(now);
		}
		for (int i = 0; i < size; i++){
			ll now = lst[y][i];
			ll a = query(now);
			if (i!=0) a -= query(lst[y][i-1]);
			ll b = query(1e9)-query(now-1);
			ans += a*b;
//			printf("%lld %lld %lld %lld %lld\n", y, now, a, b, ans);
		}
	}
	
	printf("%lld\n", ans);
	
}