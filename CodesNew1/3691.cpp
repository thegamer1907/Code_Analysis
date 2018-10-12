#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, maxi=0, ai, c;
    cin >> n >> m;
    multiset<int> a;
    while(n--){
        cin >> ai;
        maxi = max(ai+m, maxi);
        a.insert(ai);
    }
    auto it = a.begin();
    while(m--){
        c = (*it)+1;
        a.erase(a.begin());
        a.insert(c);
        it = a.begin();
    }
    cout << *a.rbegin() << ' ' << maxi;
    return 0;
}
