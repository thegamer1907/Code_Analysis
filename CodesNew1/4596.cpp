#include <bits/stdc++.h>
using namespace std;

const int N = 500005;
int a[N];

int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort ( a + 1,a + n + 1 );
	int idx = 1;
	for (int i=1;i<=n;i++){
		if (a[i] >= a[idx] * 2){
			idx++;
		}
	}
	int ans = idx - 1;
	printf("%d\n",n - min(n / 2,ans));
	return 0;
}