#include<bits/stdc++.h>
using namespace std;
int ok1[1010], ok2[1011];
int main(){
	string y; cin >>y;
	int n; cin >>n;
	for (int i = 1; i <= n; i ++){
		string x; cin >>x;
		ok1[x[1]] = 1;
		ok2[x[0]] = 1;
		if (x == y) return puts("YES"), 0; 
	}
	if (ok1[y[0]] && ok2[y[1]]) puts("YES");
	else puts("NO");
	return 0;
}