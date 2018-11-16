#include <bits/stdc++.h>
#define FAST_IO ios::sync_with_stdio(false)
#define clr(a,b) memset(a,b,sizeof(a))
using namespace std;
typedef long long ll;
typedef long double ld;
const long double eps = 1e-6;
const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int maxn = 1e5+20;

int n;
int a[maxn];

int main(){
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	int ans = -1;
	for(int i=1;i<=n;i++){
		int tmp = 1;
		int t = a[i];
		while(t!=-1){
			t = a[t];
			tmp++;
		}
		ans = max(ans,tmp);
	}
	cout << ans << endl;
	return 0;
}