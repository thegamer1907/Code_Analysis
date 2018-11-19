#include <iostream>
#include <iomanip>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <cmath>
#include <stack>
#include <limits>
using namespace std;

typedef short i16;
typedef long i32;
typedef long long i64;

// Retorna true em caso de:
//	- os tres ponteiros estao entre os pontos t1 e t2
//	- nenhum dos ponteiros esta entre os pontos t1 e t2
//	sao os unicos casos em que eh possivel ir de t1 a t2
bool solve(double h, double m, double s, double t1, double t2) {
	if (m > 0 || s > 0) h += 0.1;
	if (s > 0) m += 0.1;

	int k = 0;
	// t1 e t2 estao na escala de horas (1, 2, ..., 12)
	// precisamos multiplicar por 5 para converter a
	// escala dos ponteiros de minuto e segundo (0, 1, ..., 59)
	if (t1 < h && h < t2) k++;
	if (5*t1 < m && m < 5*t2) k++;
	if (5*t1 < s && s < 5*t2) k++;

	return (k == 0) || (k == 3);
}

int main() {
	ios::sync_with_stdio(false);
	int h, m, s, t1, t2;

	cin >> h >> m >> s
		>> t1 >> t2;

	double fh = h,
		   fm = m,
		   fs = s,
		   ft1 = min(t1, t2),
		   ft2 = max(t1, t2);

	bool ans = solve(fh, fm, fs, ft1, ft2);

	cout << (ans ? "YES" : "NO") << endl;
	return 0;
}
