#include<bits/stdc++.h>
#define int long long
using namespace std;
inline int read()
{
    int n = 0 , c = 0, m;
    while (!isdigit(c)) m = c - 45 ? 1 : -1 , c = getchar();
    while (isdigit(c))  n = n * 10 + c - 48 , c = getchar();
    return m * n;
}
const int N = 1e6 + 1;
string t;
main()
{
    string s;
    cin >> s;
    int n = read();
    int l = 0 , r = 0;
    for(int i = 1; i <= n; i ++){
        cin >> t;
        if(s == t)
            return cout << "YES" , 0;
        if(s[0] == t[1])
            l = 1;
        if(s[1] == t[0])
            r = 1;
    }
    cout <<(l + r == 2 ? "YES" : "NO");
}
