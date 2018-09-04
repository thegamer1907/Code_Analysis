#include <bits/stdc++.h>
 
using namespace std;
 
#define fi first
#define se second
#define mp make_pair
#define pb push_back

typedef long long ll;

const ll mod = 1e9+7;
const double pi = acos(-1);

int n,t,j,i,k,m;
//pair<int, int> pol[10000005];
int a[100002];

int main(){
	scanf("%d", &n);
	a[0] = 0;
	for(i=1;i<=n;i++){
		scanf("%d", &t);
		a[i] = a[i-1] + t;
	}
	scanf("%d", &t);
	while(t--){
		scanf("%d", &m);
		printf("%d\n", lower_bound(a+1, a+n+1, m) - a);
	}
	return 0;
}