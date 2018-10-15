#include <bits/stdc++.h>

using namespace std;
unsigned long long n, m, a[1000000], b, k = 0, l, r, km = 0, sm = 0;
map <unsigned long long, unsigned long long> s;
map <unsigned long long, unsigned long long> :: iterator it;
int main()

{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            k += a[i];
            s.insert({k, i});
        }
  /*  for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << it -> first << ' ' << it -> second << endl;
        }*/
    k = 0;
    for (int i = 0; i < m; i++)
        {
            cin >> b;
            k += b;
            it = s.lower_bound(k);
            if (it == s.end())
            {
                cout << n << endl;
                k = 0;
            }
            else
                if (k == it -> first)
                {
                    it++;
                    if (it == s.end())
                        {
                            cout << n << endl;
                            k = 0;
                        }
                        else
                        {
                            it--;
                            cout << n - it -> second - 1 << endl;
                        }
                }
                    else
                    cout << n - it -> second << endl;
            //cout << it -> first << ' ' << it -> second << endl;
        }

    return 0;
}
