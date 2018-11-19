#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    string s, a;
    cin >> s;
    int n;
    cin >> n;
    int f = 0, g = 0;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a == s) {
            cout << "YES\n";
            return 0;
        }
        if(a[1] == s[0])
            ++f;
        if(a[0] == s[1])
            ++g;
    }

    if(f && g) {
        cout << "YES\n";
    }
    else
        cout << "NO\n";

	return 0;
}
