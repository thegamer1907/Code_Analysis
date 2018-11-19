#include <bits/stdc++.h>

using namespace std;

int const SIZE = (int)1e5;

int main()
{
    char ps[3], w[3];
    cin >> ps;
    int n;
    cin >> n;
    bool S['z'], F['z'];
    memset(S, false, 'z');
    memset(F, false, 'z');
    for (int i = 0; i < n; i++)
    {
        cin >> w;
        if (!strcmp(ps, w))
        {
			cout << "YES\n";
			return 0;
        }
        S[w[0]] = true;
        F[w[1]] = true;
    }

    if (S[ps[1]] && F[ps[0]])
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}
