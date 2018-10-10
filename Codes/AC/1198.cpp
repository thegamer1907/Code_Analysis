#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n > m) cout << "YES";
    else if (n < m) cout << "NO";
    else
    {
        vector<string> P, E;
        P.reserve(n);
        E.reserve(m);
        for (int i = 0; i < n; i++)
        {
            string tmp;
            cin >> tmp;
            P.push_back(tmp);
        }
        for (int i = 0; i < m; i++)
        {
            string tmp;
            cin >> tmp;
            E.push_back(tmp);
        }
        sort(P.begin(), P.end());
        sort(E.begin(), E.end());
        int d = 0, p = 0;
        for (int i = 0; i < n; i++)
        {
            while (p < m && E[p] < P[i]) p++;
            d += E[p] == P[i];
        }
        if (d % 2) cout << "YES";
        else cout << "NO";
    }
    return(0);
}