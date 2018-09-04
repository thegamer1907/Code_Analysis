#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;

int main() {
	//freopen ("in.txt", "r", stdin);
	//freopen ("out.txt", "w", stdout);

	string s;

	while (cin >> s) {
        int Z[(int) s.size()] = {};

        int L = 0, R = 0;
        int n = (int) s.size();
        for (int i = 1; i < n; i++)
        {
            if (i > R)
            {
                L = R = i;
                while (R < n && s[R-L] == s[R])
                {
                    R++;
                }
                Z[i] = R-L;
                R--;
            }
            else
            {
                int k = i-L;
                if (Z[k] < R-i+1)
                {
                    Z[i] = Z[k];
                }
                else
                {
                    L = i;
                    while (R < n && s[R-L] == s[R])
                    {
                        R++;
                    }
                    Z[i] = R-L;
                    R--;
                }
            }
        }

        vector<int> arr;

        vector<int> hitung(1000005, 0);

        for (int i = 0; i < (int) s.size(); i++) {
            arr.push_back(Z[i]);
            hitung[Z[i]]++;
//            cout << Z[i] << " ";
        }
//        cout << endl;

        sort(arr.begin(), arr.end());

        int ans = 0;
        int index = -1;

        for (int i = (int) s.size() - 1; i >= 0; i--) {
            int banyak = (int) s.size() - i;
            if (banyak == Z[i]) {
                if (hitung[banyak] > 1) {
                    if (banyak > ans) {
                        ans = banyak;
                        index = i;
                        continue;
                    }
                }
                vector<int>::iterator it = upper_bound(arr.begin(), arr.end(), banyak);
                if (it == arr.end()) continue;
                int indeks = it - arr.begin();
                int haha = (int) arr.size() - indeks + 1;
                if (haha > 1) {
                    if (banyak > ans) {
                        ans = banyak;
                        index = i;
                    }
                }
            }
        }

        for (int i = index; i < index + ans; i++) {
            cout << s[i];
        }

        if (ans == 0) printf("Just a legend");

        printf("\n");
	}

	return 0;
}
