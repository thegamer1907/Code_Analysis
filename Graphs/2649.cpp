#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

vector <int> parent;

void InitDSU(const int& sizet) {
    parent.resize(sizet + 1);

    for(size_t i = 0; i < parent.size(); ++i) {
        parent[i] = i;
    }
}

int FindParent(const int& v) {
    if (v == parent[v])
        return v;
    else
        return parent[v] = FindParent(parent[v]);
}

void Link(const int& a, const int& b) {
    int pA = FindParent(a),
        pB = FindParent(b);

    if (pA != pB)
        parent[a] = pB;
}

int Count() {
    int ans = 0;

    for (size_t i = 1; i < parent.size(); ++i) {
        if (parent[i] == i)
            ++ans;
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    InitDSU(n);

    int v;
    for (int i = 0; i < n; ++i) {
        cin >> v;

        Link(i + 1, v);
    }

    cout << Count() << endl;
	return 0;
}
