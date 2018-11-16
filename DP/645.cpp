#include <bits/stdc++.h>

using namespace std;

void solve(int l, int r){
	
}

int main(){
	string s;
	cin >> s;
	int q;
	cin >> q;
	int a[s.size()+5];
	memset(a, 0, sizeof(a));
	for(int i = 0; i<s.size()-1;++i){
		if(s[i] == s[i+1])
			a[i+1] = 1;
	}
	for(int i = 1; i<s.size()+5; ++i){
		a[i] = a[i] + a[i-1];
	}
	while(q--){
		int l, r;
		scanf("%d%d", &l, &r);
		r--;
		printf("%d\n", a[r] - a[l-1]);
	}
}