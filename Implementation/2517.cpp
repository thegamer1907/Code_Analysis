#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    cout << (s.find_first_of("HQ9") != string::npos ? "YES" : "NO") << '\n';
    return 0;
}