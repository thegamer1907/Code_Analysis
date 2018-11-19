#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>
#include <bitset>
#include <string>
#include <cmath>
#include <set>
#include <map>
#define Rep(i, x, y) for (int i = x; i <= y; i ++)
#define Dwn(i, x, y) for (int i = x; i >= y; i --)
#define RepE(i, x) for (int i = pos[x]; i; i = g[i].nex)
#define ev g[i].y
using namespace std;
typedef long long ll;
typedef double db;
const int mod = 1000000007, N = 205, M = (1 << 13) + 3; // D = 1 << 12;
const int inf = 1 << 29;
int n, m, lg[M], a[N][N], l[N];
bitset<M> b[N];
char s[N][N];
int main()
{
	scanf ("%d", &n);
	Rep(i, 1, n) {
		scanf ("%s", s[i] + 1);
		l[i] = strlen(s[i] + 1);
		Rep(j, 1, l[i]) a[i][j] = s[i][j] - '0';
		Rep(j, 1, l[i]) {
			int z = 1;
			Rep(k, 0, 11) {
				if (j + k > l[i]) break ;
				z = z << 1 | a[i][j + k];
				b[i][z] = 1;
			}
		}
	}
	scanf ("%d", &m);
	Rep(i, 2, M - 2) lg[i] = lg[i >> 1] + 1;
	Rep(q, n + 1, n + m) {
		int x, y;
		scanf ("%d%d", &x, &y);
		b[q] = b[x] | b[y];
		Rep(i, 1, min(l[x], 11)) Rep(j, 1, min(12 - i, l[y])) {
			int z = 1;
			Rep(k, l[x] - i + 1, l[x]) z = z << 1 | a[x][k];
			Rep(k, 1, j) z = z << 1 | a[y][k];
			b[q][z] = 1;
			// cout << z <<" -p"<<endl;
		}
		Rep(i, 1, l[x]) a[q][++ l[q]] = a[x][i];
		Rep(i, 1, l[y]) a[q][++ l[q]] = a[y][i];
		while (l[q] > 22) {
			-- l[q];
			Rep(i, 12, l[q]) a[q][i] = a[q][i + 1];
		}
	//	cout <<q<<"     "<< l[q]<<endl;
		/* Rep(i, 1, min(l[x], 11)) a[q][++ l[q]] = a[x][i];
		Dwn(i, min(l[x], 11), 1) a[q][++ l[q]] = a[x][l[x] - i + 1];
		Rep(i, 1, min(l[y], 11)) a[q][++ l[q]] = a[y][i];
		Rep(i, 1, min(l[y], 11)) a[q][++ l[q]] = a[y][l[y] - i + 1]; */
		int k = 2;
		while (b[q][k]) k ++;
		// cout << k<<endl;
		printf("%d\n", lg[k] - 1);
	}

	return 0;
}
