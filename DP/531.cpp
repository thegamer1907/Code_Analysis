#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int m;
    cin >> m;
    int ai[n];
    ai[0] = 0;
    ai[1] = s[0] == s[1];
    int i = 2;
    while(i < n){
        ai[i] =  ai[i-1] + (s[i-1] == s[i]);
        i += 1;
    }
    i = 0;
    while(i < m){
        int li, ri;
        cin >> li >> ri;
        cout << ai[ri-1] - ai[li-1] << "\n";
        i += 1;
    }

    return 0;
}
