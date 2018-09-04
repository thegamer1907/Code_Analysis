#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	vector <int> a(n);
	for(int &i : a) cin >> i;
	int x = 0, y = 0 ;
	int mins = 1e9;
	for(int i : a) mins = min(mins, i);
	int w = mins - (mins % n);
	y = w;
	//for(int &i : a) i -= w;
	
	while (1){
		x %= n;
		if(a[x] - y <= 0){
			cout << x + 1 << '\n';break;
		}
		++y;
		++x;
	}
}
