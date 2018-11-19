
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bitset>


using namespace std;

typedef bitset<100000> bs;

bool case1(bs t1, int n) {
    return t1.count() < n;
}

bool case2(bs t1, bs t2, int n) {
    return case1(t1, n) && case1(t2, n);
}

bool case3(bs t1, bs t2, bs t3, int n) {
    auto tmp = t1 | t2;
    if(case2(tmp, t3, n))
        return true;
    tmp = t1 | t3;
    if(case2(tmp, t2, n))
        return true;
    tmp = t2 | t3;
    return case2(tmp, t1, n);
}

bool case4(bs t1, bs t2, bs t3, bs t4, int n) {
    auto t12 = t1 | t2;
    auto t13 = t1 | t3;
    auto t14 = t1 | t4;
    auto t23 = t2 | t3;
    auto t24 = t2 | t4;
    auto t34 = t3 | t4;
    if(case2(t12, t34, n) || case2(t13, t24, n) || case2(t14, t23, n))
        return true;
    auto t234 = t23 | t4;
    auto t134 = t13 | t4;
    auto t124 = t12 | t4;
    auto t123 = t12 | t3;
    return case2(t1, t234, n) || case2(t2, t134, n) || case2(t3, t124, n) || case2(t4, t123, n);
}

int main(int argc, char* argv[])
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<bs> sets(k);

    int v;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            cin >> v;
            if(v == 1)
                sets[j].flip(i);
        }
    }

    bool res = false;
    if(k == 4) {
        res = case4(sets[0],sets[1],sets[2],sets[3], n);
    } else if(k == 3){
        res = case3(sets[0],sets[1],sets[2], n);
    } else if(k == 2){
        res = case2(sets[0],sets[1], n);
    } else {
        res = case1(sets[0], n);
    }

    if(res)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

