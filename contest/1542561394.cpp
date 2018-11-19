#include<bits/stdc++.h>
using namespace std;

int main() {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	double x, y, z;
	z = s*6.;
	y = m*6 + s*.1;
	x = h*30 + m*.5 + s*(1./120);
	while(z >= 360) z -= 360;
	while(y >= 360) y -= 360;
	while(x >= 360) x -= 360;
	//cout << x << " " << y << " " << z << endl;
	double a = t1*30, b = t2*30;
	while(a >= 360) a -= 360;
	while(b >= 360) b -= 360;
	if(a > b) swap(a,b);
	int cnt = 0;
	if(a <= x && x <= b) cnt++;
	if(a <= y && y <= b) cnt++;
	if(a <= z && z <= b) cnt++;
	if(cnt == 3 || cnt == 0) cout << "YES";
	else cout << "NO";
	return 0;
}