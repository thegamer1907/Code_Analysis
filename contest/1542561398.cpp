
#include <algorithm>
#include <iostream>
#include <fstream>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define fore(i, l, r) for (int i = l; i < r; i++)
#define forn(i, n) fore(i, 0, n)

int degr[17] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024,
2048, 4096, 8192, 16384, 32768, 65536 };

int get_byte(int a, int k) {
	return a & degr[k];
}

int main() {

	int n, k; 
	cin >> n >> k;
	bool answer = false;

	int n_masks = degr[k];
	vector<int> masks(n_masks, 0);

	forn(i, n) {
		int current_mask = 0;
		forn(j, k) {
			int bit; cin >> bit;
			current_mask += bit * degr[j];
		}
		masks[current_mask]++;
	}

	int max_bust = degr[n_masks];

	forn(i, max_bust) {
		int alls = 0;
		vector<int> n_task(k, 0);
		forn(j, n_masks) {
			if (masks[j] == 0) continue;
			if (!get_byte(i, j)) continue;
			alls ++;
			forn(l, k) {
				if (get_byte(j, l)) n_task[l] ++;
			}
		}
		if (!alls) continue;
		bool this_answer = true;
		forn(l, k) {
			if (2 * n_task[l] > alls) this_answer = false;
		}
		if (this_answer) {
			answer = true;
			break;
		}
	}

	if (answer) cout << "YES";
	else cout << "NO";
	return 0;
}