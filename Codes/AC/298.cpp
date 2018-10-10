#include<cstdio>
#include<algorithm>

using namespace std;

const int MAXN = 100005;
int n, a[MAXN], m, q;

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		a[i] += a[i-1];
	}
	scanf("%d", &m);
	while(m--){
		scanf("%d", &q);
		int pos = lower_bound(a+1, a+n+1, q) - a;
		printf("%d\n", pos);
	}
	return 0;
}