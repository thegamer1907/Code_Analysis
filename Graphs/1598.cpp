#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, k, p=1;
    cin >> n >> t;
    vector<int> v(n);
    for(auto& a:v) cin >> a;
    while(p<=t && n--){
        if(p==t) return (cout << "YES", 0);
        p += v[p-1];
    }
    cout << "NO";
}