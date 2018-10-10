#include <bits/stdc++.h>
#define MAXN 10001000
typedef long long ll;

using namespace std;

int n;
int c[MAXN], a[MAXN];
bool marked[MAXN];

int main(){
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	ios_base::sync_with_stdio(false);
    cin >> n;
    memset(c, 0, MAXN);
    memset(a, 0, MAXN);
    memset(marked, false, MAXN);
    for(int i = 0; i < n; i++){
    	int t;
    	cin >> t;
    	c[t]++;
    }
    for(int i = 2; i < MAXN; i++){
    	if(marked[i]) continue;
    	for(int j = i; j < MAXN; j += i){
    		marked[j] = true;
    		a[i] += c[j];
    	}
    }
    for(int i = 1; i < MAXN; i++){
    	//cout << i << " " << a[i] << "\n";
    	a[i] += a[i - 1];
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
    	int l, r;
    	cin >> l >> r;
    	l = min(l, MAXN - 1);
    	r = min(r, MAXN - 1);
    	cout << a[r] - a[l - 1] << "\n";
    }
}
