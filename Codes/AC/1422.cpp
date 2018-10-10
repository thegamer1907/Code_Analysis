#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<=b; ++i)
#define per(i,b,a) for(int i=b; i>=a; --i)
#define mp make_pair
#define pb push_back
#define ms(a, b) memset(a, b, sizeof(a))
#define de(a) cout <<#a <<" => "<<a<<endl
#define dep(a, b) cout <<"("<<a<<","<<b<<")"<<endl
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int>vi;
const int maxn = 1e5+7;
const int inf =1e9;
ll sum = 0, k;
struct node{
	ll v;
	int id;
}a[maxn];
int n;
ll s;	
bool cmp(node b1, node b2) {
	return b1.v + b1.id*k < b2.v + b2.id*k;
}
bool check(int x) {
	k = x;
	sort(a+1, a+1+n, cmp);
	sum = 0;
	rep(i, 1, x) {
		sum+=a[i].v+a[i].id*k;
		if(sum > s) return false;
	}
	return true;
}
int main(){
	scanf("%d%lld", &n, &s);
	rep(i, 1, n) scanf("%lld", &a[i].v),a[i].id=i;
	int le=0, ri=n, mid;
	ll x=0, ans=0;
	while(le<=ri) {
		int mid = (le+ri) >> 1;
		if(check(mid)) {
			le = mid+1;
			ans = sum;
			x = mid;
		} else{
			ri=mid-1;
		}
	}
	printf("%lld %lld\n", x, ans);
	return 0;
}
