/*input
BBBSSC
6 4 1
1 2 3
4
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
typedef vector<lli > vlli;

int main()
{
	std::ios_base::sync_with_stdio(false);
	string s;
	cin >> s;
	lli a, b, c;
	cin >> a >> b >> c;
	lli ra, rb, rc;
	cin >> ra >> rb >> rc;
	lli ru;
	cin >> ru;
	lli qa, qb, qc;
	qa = qb = qc = 0;
	map<char, int> f;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i] == 'B') qa++;
		if(s[i] == 'S') qb++;
		if(s[i] == 'C') qc++;
	}
	if(qa == 0) a = 0;
	if(qb == 0) b = 0;
	if(qc == 0) c = 0;

	lli ans = 0;
	while(a || b || c) 
	{
		if(a < qa && ru >= ra * (qa - a)) {
			ru -= ra * (qa - a);
			a = qa;
		} if (b < qb && ru >= rb * (qb - b)) {
			ru -= rb * (qb - b);
			b = qb;
		} if (c < qc && ru >= rc * (qc - c)) {
			ru -= rc * (qc - c);
			c = qc;
		}
		lli val = 10000000;
		if(qa != 0) val = min(val, a / qa);
		if(qb != 0) val = min(val, b / qb);
		if(qc != 0) val = min(val, c / qc);

		ans += val;
		a -= val * qa;
		b -= val * qb; 
		c -= val * qc;
		if((a < qa && ru < qa * ra) ||
			 (b < qb && ru < qb * rb) ||
			 (c < qc && ru < qc * rc))
			break;
	} 
	lli cost = qa * ra + qb * rb + qc * rc;
	ans += ru / cost;
	cout << ans << endl;
	return 0;
}