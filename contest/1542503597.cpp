#include                        <bits/stdc++.h>
#define   lli                   unsigned long long int
#define   ll                    long long int
#define   PI                    2 * acos(0.0)
#define   UNIQUE(V)             (V).erase(unique(ALL(V), (V).end()) //vector/string etc must need to be sorted
#define   timesave              ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define   ALL(V)                (V).begin(), (V).end()
#define   MEMSET(a, val)        memset(a, val, sizeof(a))
using     namespace             std;


template  <class T> T GCD(T a, T b) { return (b != 0 ? GCD <T> (b, a%b) : a); }
template  <class T> T LCM(T a, T b) { return ((a*b)  / GCD <T> (a, b)); }


//------------------- Let`s Start ------------------------ //


int main()
{
    string s, s2;

    int n, c = 0, d = 0, l = 0;

    cin >> s;
    cin >> n;

    while(n--){
        cin >> s2;

        if(s == s2){
            l = 1;
        }

        if(s[0] == s2[1]) d = 1;

        if(s[1] == s2[0]) c = 1;
    }

    if(l || (d && c)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
