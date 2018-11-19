#include <bits\stdc++.h>

using namespace std;

int main()
{
    double rst[3];
    for (int i = 0; i < 3; i++)
        cin >> rst[i];
    rst[0] += rst[1] / 60 + rst[2] / 3600;
    rst[1] += rst[2] / 60;
    rst[1] /= 5; rst[2] /= 5;

    double str, fin;
    cin >> str >> fin;
    if (fin < str) swap(fin, str);

    bool u = true, d = true;

    for (int i = 0; i < 3; i++)
        if (str < rst[i] && rst[i] < fin)   u = false;
        else                                d = false;

    if (u || d) cout << "YES\n";
    else        cout << "NO\n";

    return 0;
}
