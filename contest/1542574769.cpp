#include <bits/stdc++.h>

using namespace std;

string barks[110];

int main()
{
    string pass;
    cin >> pass;

    string bark;

    int n; cin >> n;
    bool solFound = false;
    for (int i = 0; i < n; i++){
        cin >> barks[i];
    }

    for (int i = 0; i < n; i++){
        if (barks[i] == pass) {solFound = true; break;}
        for (int j = 0; j < n; j++){
            if (barks[i][1] == pass[0] && barks[j][0] == pass[1]) {solFound = true; break;}
        }
    }

    if (solFound) printf("YES\n");
    else printf("NO\n");

    return 0;
}
