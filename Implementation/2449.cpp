#include <bits/stdc++.h>
#define FAST_IO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define clr(a,b) memset(a,b,sizeof(a))
#define all(x) (x).begin(),(x).end()
#define pb push_back
using namespace std;
typedef long long ll;
typedef long double ld;
const long double eps = 1e-8;
const double pi = acos(-1.0);
const int mod = 1000000007;
const int INF = 0x3f3f3f3f;
const int maxn = 2e5+20;

int n,k;
int a[15];

int main(){
	FAST_IO;
	for(int i=1;i<=10;i++){
		a[i] = i*5+a[i-1];
	}
	cin >> n >> k;
	int time = 240 - k;
	cout << upper_bound(a+1,a+n+1,time) - (a+1) << endl;
	return 0;
}