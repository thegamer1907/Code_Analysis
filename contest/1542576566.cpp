/******************************************
*    AUTHOR:         BHUVNESH JAIN        *
*    INSTITUITION:   BITS PILANI, PILANI  *
******************************************/
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef long double LD;
typedef pair<int,int> pii;
typedef pair<LL, LL> pll;

#define fi				first
#define sec 			second

bool cmp(pii a, pii b) {
	return a.fi*b.sec < a.sec*b.fi;
}

bool cmp2(pii a, pii b) {
	return a.fi*b.sec == a.sec*b.fi;
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
	#endif
	int h, m, s, x, y;
	cin >> h >> m >> s >> x >> y;
	h %= 12;
	int hn = (h * 3600 + 60 * m + s);
	int hd = 3600/30;
	int mn = (60 * m + s);
	int md = 10;
	int sn = s * 6;
	int sd = 1;

	int xn = (x%12) * 30;
	int xd = 1;
	int yn = (y%12) * 30;
	int yd = 1;
/*
	 cout << hn << " " << hd << "\n";
	 cout << mn << " " << md << "\n";
	 cout << sn << " " << sd << "\n";
	 cout << xn << " " << xd << "\n";
	 cout << yn << " " << yd << "\n";*/
	vector<pair<int,int>> a(3);
	a[0] = {hn, hd};
	a[1] = {mn, md};
	a[2] = {sn, sd};
	sort(a.begin(), a.end(), cmp);

	int g = 0;
	if (cmp2(a[0], a[1])) {
		g += 1;
	}
	if (cmp2(a[0], a[2])) {
		g += 1;
	}
	if (cmp2(a[1], a[2])) {
		g += 1;
	}

	assert(g == 0 || g == 3 || g == 1);

	int f = 0;
	for(int i = 0; i < 3; ++i) {
		int u = cmp(a[i], {xn, xd});
		int v = cmp(a[i], {yn, yd});
		if (u^v != 0) {
			f += 1;
			 //cout << i << " " << u << " " << v << "\n";
		}
	}
	//cout << g << " " << f << "\n";
	if (g == 0) {
		if (f == 0 || f == 3) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	else if (g == 1) {
		if (f==0||f == 3) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	else {
		cout << "YES\n";
	}
	return 0;
}