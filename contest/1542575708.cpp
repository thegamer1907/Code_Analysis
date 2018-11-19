#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
#define _f first
#define _s second
using namespace std;
const int MOD = (int)1e9 + 7;
const int N = (int)3e5;
const int M = (int)4e5;

ll BE(ll a, ll b){
	ll ans = 1, i;
	for (i=a;b;b>>1, i = i*i) {
		if (b&1)
			ans += ans*i;  
	}
	return ans;
}

string str[1000];

int main() {
	string pass; cin >> pass;
	int n; cin >> n;
	for (int i=1;i<=n;i++){
		cin >> str[i];
	}

	for (int i=1;i<=n;i++){
		if ((str[i][0]==pass[0]  && str[i][1] == pass[1])) {
				printf("YES\n");
				return 0;
		}
		for (int j=1;j<=n;j++) {
			if ((str[i][0]==pass[1]  && str[j][1] == pass[0])|| (str[i][1]==pass[0] && str[j][0] == pass[1])){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}