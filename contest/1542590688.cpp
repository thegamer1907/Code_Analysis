#include <bits\stdc++.h>

using namespace std;

int main()
{
    string mm;
    cin >> mm;

    int n;
    cin >> n;

    bool F = false, L = false;
    string tmp;

    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp == mm){
            cout << "YES\n";
            return 0;
        }
        if (tmp[1] == mm[0])
            F = true;
        if (tmp[0] == mm[1])
            L = true;
    }

    if (F && L) cout << "YES\n";
    else        cout << "NO\n";

    return 0;
}
