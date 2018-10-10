#include <bits/stdc++.h>
#define FAST_IO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define CaseT int T;cin >> T;for(int cas=1;cas<=T;cas++)
#define clr(a,b) memset(a,b,sizeof(a))
#define sgn(a) ((a)==0?0:(a)/abs(a))
#define upd(a,b) (a%b?a/b+1:a/b)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define fst first
#define sec second
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const double EPS = 1e-8;
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int MOD = 1e9+7;
const int M = 1e5+20;
const int N = 2e5+20;

int n,q;
int a[N],t[N];

int cal(int x){
	int l = 1, r = n;
	while(l<r){
		int mid = (l+r)/2;
		if(t[mid]>=x&&t[mid-1]<x) return mid;
		else if(t[mid]<x){
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	return l;
}

int main(){
	FAST_IO;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		t[i] = a[i] + t[i-1];
	}
	cin >> q;
	int x;
	while(q--){
		cin >> x;
		cout << cal(x) << endl;
	}
	return 0;
}