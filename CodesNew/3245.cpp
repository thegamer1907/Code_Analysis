#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef double D;
typedef long double LD;
typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> opset;
#define SZ(X) ((int)X.size())
#define ALL(I) I.begin(), I.end()
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define eps 1e-12
#define MXN 200005
#define IOS ios_base::sync_with_stdio(0); cin.tie(0)

int n, m, a[MXN], mx;

int main(){
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i ++){
		scanf("%d", &a[i]);
		mx = max(mx, a[i]);
	}
	for(int i = 1; i <= 20000; i ++){
		int f = 0, cnt = 0;
		for(int j = 0; j < n; j ++){
			if(a[j] > i) f = 1;
			cnt += i - a[j];
		}
		if(!f && cnt >= m){
			printf("%d ", i);
			break;
		}
	}
	printf("%d\n", mx + m);
}

