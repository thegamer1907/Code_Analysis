#include <bits/stdc++.h>
using namespace std;

string s, t[105];
bool dp[1000005];
int pre[105];
int suff[105];

int main(){
	int n;
	cin >> s;
	scanf("%d", &n);
	bool ok = 0;
	for(int i=0;i<n;i++){
		cin >> t[i];
		if(t[i] == s) ok = 1;
	}
	if(ok){
		printf("YES\n");
		return 0;
	}

	int ss = 0;
	for(int i=0;i<n;i++){
		if(t[i][1] == s[0]) ss = 1;
	}
	if(ss == 0){
		printf("NO\n");
		return 0;
	}
	for(int i=0;i<n;i++){
		if(t[i][0] == s[1]) ss = 2;
	}
	if(ss == 2) printf("YES\n");
	else printf("NO\n");
}