#include<bits/stdc++.h>
using namespace std;
typedef double DB;
typedef pair<DB, DB> PDD;
const DB pi = acos(-1);
const DB EPS = 1e-12;

void get(DB &p) {
	if (p >= pi) p -= 2.0 * pi;
	if (p < -pi) p += 2.0 * pi;
}

int isIn(DB p, DB s, DB t) {
	if (p > s - EPS && p < t + EPS) return 1;
	return 0;
}

int main() {
	int h, m, s, f, t;
	scanf("%d%d%d%d%d", &h, &m, &s, &f, &t);
	DB hh = h + 1.0 * m / 60 + 1.0 * s / 60 / 60;
	DB mm = m + 1.0 * s / 60;
	DB ah = hh * (pi / 6);
	DB am = mm * (pi / 30);
	DB as = 1.0 * s * (pi / 30);
	DB af = 1.0 * f * (pi / 6);
	DB at = 1.0 * t * (pi / 6);
	get(ah);
	get(am);
	get(as);
	get(af);
	get(at);
	{
		vector<PDD> vec;
		if (at < af - EPS) {
			vec.push_back(PDD(af, pi));
			vec.push_back(PDD(-pi, at));
		} else vec.push_back(PDD(af, at));
		int flg = 0;
		for (int i = 0; i < vec.size(); i ++) {
			DB from = vec[i].first, to = vec[i].second;
			if (isIn(ah, from, to) || isIn(am, from, to) || isIn(as, from, to)) {
				flg = 1;
				break;
			}
		}
		if (!flg) return puts("YES"), 0;
	}
	swap(af, at);
	{
		vector<PDD> vec;
		if (at < af - EPS) {
			vec.push_back(PDD(af, pi));
			vec.push_back(PDD(-pi, at));
		} else vec.push_back(PDD(af, at));
		int flg = 0;
		for (int i = 0; i < vec.size(); i ++) {
			DB from = vec[i].first, to = vec[i].second;
			if (isIn(ah, from, to) || isIn(am, from, to) || isIn(as, from, to)) {
				flg = 1;
				break;
			}
		}
		if (!flg) return puts("YES"), 0;
	}
	puts("NO");
	return 0;
}

