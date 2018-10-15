#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstring>
#include <sstream>
#include <cstdio>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define cont continue;
#define endl "\n"
using namespace std;
typedef long long ll;
ll n;
const ll MAXN = 1e6;
string s[560000];
int main()
{
    fast_io;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> s[i];
        s[i].erase(s[i].begin());
    }
    for (int i = n; i >= 2; --i){
        if (s[i] > s[i - 1]){
//            cout << s[i] << " " << s[i + 1] << endl;
            continue;
        } else {
            string s1;
            ll pos = 0;
            while (s1 <= s[i]){
                s1 += s[i - 1][pos];
                pos++;
            }
            s1.erase(s1.size() - 1, 1);
            s[i - 1] = s1;
        }
    }
    for (int i = 1; i <= n; ++i){
        cout << "#" << s[i] << endl;
    }

    return 0;
}
