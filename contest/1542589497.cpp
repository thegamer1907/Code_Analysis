#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    
    string ps;
    cin >> ps;
    int n;
    cin >> n;
    bool sw = false, cw1 = false, cw2 = false;
    string ts[n];
    for(int i = 0; i < n && !sw && !(cw1 && cw2); i++) {
        cin >> ts[i];
        if (ps == ts[i]) sw = true;
        if (ps[0] == ts[i][1]) cw1 = true;
        if (ps[1] == ts[i][0]) cw2 = true;
    }
    
    if (sw || (cw1 && cw2)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
