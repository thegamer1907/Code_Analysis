#include <iostream>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <iomanip>

#define mp make_pair
#define rep(i,s,f) for(int i = s; i < f; i++)
#define pb push_back
#define sq(x) ((x)*(x))
#define en '\n'
#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector < vector <int> > vii;
typedef vector <long long> vll;
typedef set <int> si;

const int N = 2e5+2;
ll a[N], q[N], n;

bool find(int lb, ll sum){
	
	int l = lb, r = n-1;
	while (l < r){
		
		int mid = (l+r)/2;
		if (sum > q[mid]) r = mid-1;
		else if (sum < q[mid]) l = mid+1;
		else return 1;
	}
	if (q[l] == sum) return 1;
	return 0;
}

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	ll s = 0, ans = 0;
	cin >> n;
	rep(i,0,n)
		cin >> a[i];
	q[n] = 0;
	for(int i = n-1; i >= 0; i--)
		q[i] = q[i+1]+a[i];
		
	rep(i,0,n-1){
		s += a[i];
		if (find(i+1,s)) ans = s;
	}
	cout << ans;
}