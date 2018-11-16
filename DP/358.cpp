#include <bits/stdc++.h>
using namespace std ;

const int N = 1e5 + 2 ;
const int INF = 1e9 + 7 ;

/************************************/
int b[105], g[105];
int main() {
	int n, m;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> g[i];
	}
	sort(b, b + n);
	sort(g, g + m);
	int p1 = 0, p2 = 0;
	int c = 0;
	while(p1 < n && p2 < m){
		if( abs(b[p1] - g[p2]) <= 1){
			c++;
			p1++;
			p2++;
			continue;
		}
		if(b[p1] < g[p2] ){
			p1++;
		}else{
			p2++;
		}
	}
	
	cout << c << endl;
	return 0 ;
}
