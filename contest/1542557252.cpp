#include <bits/stdc++.h>
using namespace std;
const double EPS = 1e-9;
int h, m, s, t1, t2;
int main(){
	cin >> h >> m >> s >> t1 >> t2;
	double degh = (h % 12) * 30.0 + (m * 0.5) + (s / 120.0);
	double degm = (m * 6.0) + (s * 0.1);
	double degs = (s * 6.0);
	double degt1 = (t1 % 12) * 30.0;
	double degt2 = (t2 % 12) * 30.0;
	int reg1 = -1, reg2 = -1;
	double deg[3] = {degh, degm, degs};
	sort(deg, deg + 3);
	for(int i = 0; i < 3; ++i){
		if(reg1 == -1 && deg[i] - degt1 > EPS) reg1 = i;
		if(reg2 == -1 && deg[i] - degt2 > EPS) reg2 = i;
	}
	if(reg1 == -1) reg1 = 0;
	if(reg2 == -1) reg2 = 0;
	puts(reg1 == reg2 ? "YES" : "NO");
	return 0;
}