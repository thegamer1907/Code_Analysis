#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 120

using namespace std;

int n, ans, at;
string s[MAXN], sx, r;
char a, b;

int main(){_
	cin >> sx;
	cin >> n;
	int bol = 0;
	for(int i = 0; i < n; i++){
		cin >> s[i];
		r = s[i];
		if(sx == r) bol = 1;
		if((sx[0] == r[1]) && (sx[1] == r[0])) bol = 1;
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j){
				a = s[i][1]; b = s[j][0];
				//cout << a << b << ' ';
				if((a == sx[0]) && (b == sx[1])) bol = 1;
				//if((a == sx[1]) || (b == sx[0])) bol = 1;
				a = s[j][1]; b = s[i][0];
				//cout << a << b << ' ';
				if((a == sx[0]) && (b == sx[1])) bol = 1;
				//if((a == sx[1]) || (b == sx[0])) bol = 1;
			
			}
		}
	}
	
	cout << ((bol == 1) ? "YES\n" : "NO\n");
	return 0;
}
// 1509245990246
