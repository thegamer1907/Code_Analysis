#include <bits/stdc++.h>
#define fr(x) scanf("%d", &x)
using namespace std;

string a[100010];

signed main(){
	int n;
	string pass;
	cin>>pass;
	fr(n);
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(a[i] == pass){
			printf("YES\n");
			return 0;
		}
	}
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			if(pass[0] == a[i][1] && pass[1] == a[j][0]) {
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}