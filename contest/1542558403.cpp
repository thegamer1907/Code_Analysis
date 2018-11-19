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

const int N = 1e5+10;

int main() {
	ios::sync_with_stdio(false);
	int n, k, x;
	int c[20] = {0,};
	
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int t = 0;
		for (int j = 0; j < k; j++) {
			cin >> x;

			// insere o elemento j no conjunto t
			if (x) t |= (1 << j);
		}
		// marcando q a combinacao t esta presente
		c[t] = 1;
	}
	
	// inserindo em um vector as combinacoes presentes (times que sabem um problema)
	vector<int> p;
	for (int i = 0; i < (1 << k); i++)
		if (c[i]) p.push_back(i);

	bool ans = false; // assumimos que nao eh possivel

	// para cada combinacao de problemas para o contest
	for (int i = 1; i < (1 << p.size()); i++) {
		int cnt = 0;
		int pt[5] = {0,};

		for (int j = 0; j < p.size(); j++) {
			if (i & (1 << j)) { // verifica se o problema j pertence a comb i
				cnt++; // aumenta o numero de problemas
				
				// para cada time competidor, computar se sabe o problema
				int u = p[j]; // pega o conj de times que sabem esse problema
				for (int h = 0; h < k; h++) {
					if (u & (1 << h)) // se time h sabe esse problema
						pt[h]++;
				}
			}
		}

		// olhar para pt e verificar se todos times sabem menos de
		// cnt / 2 problemas (cnt, pois sao o numero de problemas *desta* comb.)
		int m = cnt / 2;
		bool local_ans = true; // assumimos verdade
		for (int h = 0; h < k; h++) {
			// para cada time h
			if (pt[h] > m) // opa, nao eh verdade nesta comb.
			{ local_ans = false; break; }
		}

		if (local_ans) {
			ans = true; // achamos uma comb para verdade
			break;
		}
	}

	cout << (ans ? "YES" : "NO") << endl;

	return 0;
}
