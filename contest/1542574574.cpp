#include<bits/stdc++.h>
#define FO(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int pd[43205];
int h, m, s, t1, t2, f;
int main() {
	cin >> h >> m >> s >> t1 >> t2;
	if(h == 12)  h = 0;
	t1 *= 60 * 60, t2 *= 60 * 60;
	pd[s * 12 * 60 ] = 1;
	pd[m * 12 * 60 + s * 12] = 1;
	pd[h * 60 * 60 + m * 60 + s] = 1;
	if(pd[t1] || pd[t2]) {
		cout << "NO";
		return 0;
	}
	else {
		f = 0;
		if(t1 > t2) swap(t1, t2);
		FO(i, t1, t2) 
			if(pd[i])
				f = 1;
		if(!f) {
			cout<<"YES";
			return 0;
		}
		f = 0;
		FO(i, t2, 12 * 60 * 60 - 1)
			if(pd[i])
				f = 1;
		FO(i, 0, t1)
			if(pd[i])
				f = 1;
		if(!f) {
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}