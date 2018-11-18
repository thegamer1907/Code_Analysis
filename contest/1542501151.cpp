#include <bits/stdc++.h>

using namespace std;

int main()
{

    bool ba = false, bb = false;
    int n;
    string ab;
    cin >> ab >> n;

    string sab;

    for(int i = 0; i < n; i++)
    {
        cin >> sab;
        if(ab == sab) ba = true, bb = true;
        if(ab[0] == sab[1]) ba = true;
        if(ab[1] == sab[0]) bb = true;
    }

    if(ba and bb)
        cout << "YES";
    else cout << "NO";


    return 0;
}
