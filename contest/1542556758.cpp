#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define maxn (int)1e9+1

using namespace std;

char a, b, c, d;
int t, achou1, achou2, f, s;

signed main(){_
	for(cin >> a >> b >> t; t-- && cin >> c >> d; ){
		if(a == c && b == d){
			achou1 = achou2 = 1;	
		}
		if(a == d){
			achou1 = 1;
		}
		if(b == c){
			achou2 = 1;
		}
	}
	if(achou1 && achou2){
		cout << "YES\n";
	}else cout << "NO\n";
	exit(0);
}
/*
4
7
44
47
74
77
*/
// 1509245462559
