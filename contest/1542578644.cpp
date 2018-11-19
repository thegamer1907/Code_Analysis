#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()
#define bits(x) __builtin_popcount(x)

using namespace std;

set <string> f;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//cout << fixed << setprecision(10);
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);

    int n, k;

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        string t = "";
        for (int kk = 0; kk < k; kk++)
        {
            int a;
            cin >> a;
            t.push_back(a + '0');
        }

        f.insert(t);
    }

    vector <string> fuck;
    for (auto it : f)
        fuck.push_back(it);




    for (int i = 0; i < fuck.size(); i++)
    {
        for (int j = i; j < fuck.size(); j++)
        {
            bool ff = 1;
            for (int r = 0; r < k; r++)
            {
                int a = fuck[i][r] - '0';
                int b = fuck[j][r] - '0';

                if (a + b > 1)
                {
                    ff = 0;
                    break;
                }
            }

            if (ff)

            {
                cout << "YEs";
                return 0;
            }

        }
    }


    cout << "NO";

    return 0;
}

