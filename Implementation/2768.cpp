#include <bits/stdc++.h>
#define pb push_back

typedef long long ll;
typedef long double ld;

using namespace std;




int main(){

	int n, mx = -1, sum = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		sum += x;
		mx = max(mx, x);
	}
	printf("%d\n", mx * n - sum);

	return 0;
}