#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>
#include<unordered_map>
#include<map>

using namespace std;
using ll = long long;
using vec = vector<ll>;
using mat = vector<vec>;
using lst = list<ll>;


int main()
{
    ll n, m, k;
    cin >> n >> m >> k;

    lst last;
    ll pn = 0;
    ll pi =1;
    ll ck = k;

    for (int i = 0; i < m; ++i)
    {
        ll p;
        cin >> p;
        last.emplace_back(p);
    }

    ll ans = 0;

    while(!last.empty()) {
        while (last.front() <= k) {
            //cout << "*" << k << endl;
            while (last.front() <= k) {
                //cout << last.front() << " ";
                last.pop_front();
                pn++;
                if (last.empty()) {
                    cout << ans + 1 << endl;
                    return 0;
                }
            }
            //cout << endl;
            k += pn;
            pn = 0;
            ++ans;
        }
        pi++;
        k += ck*((last.front()-k+ck-1)/ck);
    }
    cout << ans << endl;


    return 0;
}