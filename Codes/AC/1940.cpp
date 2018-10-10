#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <bitset>
#include <string>
using namespace std;
#define ll long long int

const int N = 200001;
int n, k;
ll ans, a[N];
map<ll, vector<int> > idxs;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    scanf("%d %d", &n, &k);
    for (int i=0; i < n; i++) {
        scanf("%lld", &a[i]);
        if (idxs.find(a[i]) == idxs.end()) {
            idxs.insert(pair<ll,vector<int> >(a[i], vector<int>()));
        }
        idxs[a[i]].push_back(i);
    }

    for (int i=1; i<n-1; i++) {
        ll ai = a[i];
        if (ai%k != 0) 
            continue;
        if (idxs.find(ai/k) == idxs.end() or idxs.find(ai*k) == idxs.end())
            continue;
        ll before = (lower_bound(idxs[ai/k].begin(), idxs[ai/k].end(), i) - idxs[ai/k].begin());
        ll after = (idxs[ai*k].size() - (upper_bound(idxs[ai*k].begin(), idxs[ai*k].end(), i) - idxs[ai*k].begin()));
        ans += before * after;
    }
    printf("%lld\n", ans);
}