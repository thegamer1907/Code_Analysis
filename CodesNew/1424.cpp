#define _debug

#define _out(x) cout << x << endl
#define _inf 1000000000000000000ll

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

template<typename... Args>
void writeln(Args... args)
{
    ((cout << args << " "), ...);
    cout << endl;
}

#ifdef _debug
template<typename... Args>
void _db(Args... args)
{
    ((cerr << args << " ;; "), ...);
    cout << endl;
}
#else
template<typename... Args>
void _db(Args... args) {}
#endif


int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    ll count1, count2, count3;
    ll price1, price2, price3;
    ll req1= 0ll, req2 = 0ll, req3 = 0ll;
    for (char c : s) {
        switch (c) {
            case 'B':
                ++req1;
                break;
            case 'S':
                ++req2;
                break;
            case 'C':
                ++req3;
                break;
        }
    }
    cin >> count1 >> count2 >> count3;
    cin >> price1 >> price2 >> price3;
    ll money;
    cin >> money;
    ll res = 0;
    // here we use up all the given ingrediens and buy some to add up to full burgers
    for (;;) {
        if (count1 * req1 == 0 && count2 * req2 == 0 && count3 * req3 == 0) {
            break;
        }
        ll cost = 0;
        if (count1 < req1) {
            cost += (req1 - count1) * price1;
            count1 = req1;
        }
        if (count2 < req2) {
            cost += (req2 - count2) * price2;
            count2 = req2;
        }
        if (count3 < req3) {
            cost += (req3 - count3) * price3;
            count3 = req3;
        }
        if (cost > money) {
            writeln(res);
            return 0;
        }
        money -= cost;
        ++res;
        count1 -= req1;
        count2 -= req2;
        count3 -= req3;
    }

    // now we have 0 ingredients left of each ingredient
    ll burger_price = req1 * price1 + req2 * price2 + req3 * price3;
    res += money / burger_price;
    writeln(res);

    return 0;
}
