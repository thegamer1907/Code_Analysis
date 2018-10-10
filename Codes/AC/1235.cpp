#include <bits/stdc++.h>

using namespace std;

#define openfile {freopen("input.txt","r",stdin);}
#define debug 0

int n, m;
string a[1010], b[1010];

int main() {
	if (debug) openfile;
	cin>>n>>m;
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
	for (int i=0; i<m; i++) {
		cin>>b[i];
	}
	sort(a, a+n);
	sort(b, b+m);
	int i=0, j=0; 
	int cmStr = 0;
	while (i<n && j<m) {
		if (a[i]==b[j]) {
			cmStr++;
			i++;
			j++;
		}
		else if (a[i]<b[j]) {
			i++;
		}
		else {
			j++;
		}
	}
	if (cmStr%2) {
		m--;
	}
	n-=cmStr;
	m-=cmStr;
	if (n>m) {
		puts("YES");
	}
	else puts("NO");
	return 0;
}