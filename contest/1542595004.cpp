#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()
#define bits(x) __builtin_popcount(x)

using namespace std;

string a[12312];


bool is_substr (const string& s, const string& f)
{
    for (int i = 0; i + 1 < s.size(); i++)
    {
        if (s[i] == f[0] && s[i + 1] == f[1])
            return 1;
    }
    return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//cout << fixed << setprecision(10);
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);

    string s;

    cin >> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string t = a[i] + a[j] + a[i] + a[j];

            if (is_substr(t, s))
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}

