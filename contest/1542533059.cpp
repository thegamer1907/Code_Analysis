#include <bits/stdc++.h>
using namespace std;

int clr[3600*3600];

int main(){
	int h, m, s; cin >> h >> m >> s;
	h = (h*5)%60;
	int a = h*3600+m*60+s, b=m*3600+s*60, c=s*3600;
	int t1, t2; cin >> t1 >> t2;
	t1 = (t1*5)%60, t2 = (t2*5)%60;
	t1 *= 3600, t2 *= 3600;
	if(a > b) swap(a, b);
	if(b > c) swap(b, c);
	if(a > b) swap(a, b);
	for(int i=a;i<=b;i++) clr[i] = 1;
	for(int i=b;i<=c;i++) clr[i] = 2;
	cout << (clr[t1]==clr[t2]?"Yes":"No") << '\n';
	return 0;
}