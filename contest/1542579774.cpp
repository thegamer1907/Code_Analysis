#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	//freopen ("in.txt", "r", stdin);
	//freopen ("out.txt", "w", stdout);

	string s;

	while (cin >> s) {
        int n;
        scanf("%d", &n);

        vector<string> arr;

        for (int i = 0; i < n; i++) {
            string ss;
            cin >> ss;
            arr.push_back(ss);
        }

        bool bisa = false;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                if (arr[i][1] == s[0] && arr[j][0] == s[1]) {
                    bisa = true;
                }
                if (arr[j][1] == s[0] && arr[i][0] == s[1]) {
                    bisa = true;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] == s) {
                bisa = true;
            }
        }

        for (int i = 0; i < n; i++) {
            reverse(arr[i].begin(), arr[i].end());
            if (arr[i] == s) {
                bisa = true;
            }
        }

        if (bisa) printf("YES\n");
        else printf("NO\n");
	}

	return 0;
}
