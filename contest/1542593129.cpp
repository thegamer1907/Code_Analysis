#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define fir first
#define sec second
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n; string s;
    cin >> s >> n;
    vector <string> V(n);
    for(int i=0; i<n; i++)
        cin >> V[i];
    bool b1=false, b2=false;
    for(int i=0; i<n && !b1; i++)
        b1 = (V[i][1]==s[0]);
    for(int i=0; i<n && !b2; i++)
        b2 = (V[i][0]==s[1]);
    for(int i=0; i<n && (!b1 || !b2); i++)
        b1=b2=(V[i]==s);
    (b1 && b2) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
