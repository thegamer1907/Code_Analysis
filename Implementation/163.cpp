#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
#include<set>
#include<map>


using namespace std;

#define int long long


struct str {
	int val, mod, lb, rb;
	str *cl;
	str * cr;

	str(vector<int> &a, int L, int R) {
		lb = L;
		rb = R;
		mod = 0;
		val = 0;
		if (L == R - 1) {
			val = a[L];
		} else {
			cl = new str(a, L, (L+R)/2);
			cr = new str(a, (L+R)/2, R);
			val = max(cr->val, cl->val);
		}

	}
	void push() {
		if (cl != nullptr) {
			cl->mod += mod;
		}
		if (cr != nullptr) {
			cr->mod += mod;
		}
		val += mod;
		mod = 0;

	}
	int get(int L, int R) {
		if (lb == L && rb == R) {
			return val + mod;

		} else {
			int m = (lb + rb)/2;
			push();
			if (R<= m) {
				return cl->get(L, R);
			} else if (L >= m) {
				return cr->get(L, R);

			} else {
				return max(cl->get(L, m), cr->get(m, R));
			}
		}


	}


	void update(int L, int R, int x) {

		if (lb == L && rb == R) {
			mod += x;
		} else {
			int m = (lb + rb) / 2;
			val += x;
			if (R <= m) {
				cl->update(L, R, x);
			} else if (L >= m) {
				cr->update(L, R, x);

			} else {
				cl->update(L, m, x);
				cr->update(m, R, x);

			}

		}
	}


};


void flash() {
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();

}



signed main() {
	//flash();
	int n, a, b;
	cin >> n >> a >> b;
	a--, b--;
	int xr = a ^ b;
	int r=  0;
	int bit  = 0;
	for (int bt = 30; bt >= 0; --bt) {
		if ((xr >> bt) & 1) {
			r = bt;
			bit = bt;
			break;
		}

	}
	if ((1<<bit) >= n / 2) {
		cout << "Final!";
	} else {
		cout << bit + 1 << endl;
	}

	//system("pause");
}


/*
tests:




*/
