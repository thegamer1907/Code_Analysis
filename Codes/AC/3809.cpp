#include <bits/stdc++.h>

using namespace std;

#define int long long

string s;
int a[4], b[4], w[4], k;

int ch(int x){
	int col = 0;
	for (int i = 0; i < 3; i++){
		if (w[i]) col += max(((x * w[i]) - b[i]) * a[i], 0ll); 
	}
	return k>=col;
}

main (){
	cin >> s >> b[0] >> b[1] >> b[2];
	cin >> a[0] >> a[1] >> a[2] >> k;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == 'B') w[0]++;
		if (s[i] == 'S') w[1]++;
		if (s[i] == 'C') w[2]++;
	}
	int l = 0, r = 1e15;
	while (l < r - 1){
		int mid = (l + r) / 2;
//		cout << l << " " << r << endl;
		if (ch(mid)){
			l = mid;
		}
		else {
			r = mid - 1;
		}
	}	
	if (ch(r)){
		cout << r;
	}
	else {
		cout << l;
	}
}