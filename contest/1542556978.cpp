#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    string pass , str;
    int n;
    cin >> pass >> n;

    bool flag1 = false , flag2 = false;

    for (int i = 0 ; i < n ; i++){
        cin >> str;

        if (str == pass || str[1] == pass[0])
            flag1 = true;

        if (str == pass || str[0] == pass[1])
            flag2 = true;
    }
 
    if (flag1 && flag2)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}