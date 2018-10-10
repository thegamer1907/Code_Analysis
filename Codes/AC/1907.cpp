#include<bits/stdc++.h>
using namespace std;
map<int, int> a, b;
int n, k, arr[200008];
int main(){
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin>>arr[i], ++a[arr[i]];
    long long res = 0;
    for(int i = 0; i < n; ++i){
        long long x = 1LL*k*arr[i];
        --a[arr[i]];
        if(abs(x) < INT_MAX && arr[i]%k == 0)
            res += 1LL*a[x]*b[arr[i]/k];
        ++b[arr[i]];
    }cout << res << '\n';
    return 0;
}