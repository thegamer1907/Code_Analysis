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
#define eps 1e-9
#define MXN 200005

int n, cnt[30], a, k, t;

int main(){
	cin >> n >> k;
	while(n --){
		t = 0;
		for(int i = 0; i < k; i ++){
			scanf("%d", &a);
			t |= (a << i);
		}
		cnt[t] ++;
	}
	for(int i = 0; i < (1 << k); i ++){
		for(int j = 0; j < (1 << k); j ++) if(cnt[i] && cnt[j] && ((i & j) == 0)) return 0 * printf("YES\n");
	}
	puts("NO");
}

