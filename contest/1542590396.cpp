#include<bits/stdc++.h>

using namespace std;
char pw[10];
char a[105][5];
int n,pd,s,f;
int main() {
	scanf("%s", pw);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		scanf("%s", a[i]);
		if(a[i][0] == pw[0] && a[i][1] == pw[1]) pd = 1;
		if(a[i][0] == pw[1] && a[i][1] == pw[0]) pd = 1;
		if(a[i][1] == pw[0]) f = 1;
		if(a[i][0] == pw[1]) s = 1;
	}
	if(pd ||(f + s == 2)) {
		cout << "YES\n";
	}
	else cout << "NO\n";
	return 0;
}