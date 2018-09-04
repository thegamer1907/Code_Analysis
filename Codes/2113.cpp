#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

vector<long long> a;
map<long long, long long> lp, rp;

int main()
{
    long long n, k;
    long long ans = 0;
    cin >> n >> k;
    a.resize(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        rp[a[i]]++;
    }
    for(int i=0; i<n; i++){
        rp[a[i]]--;
        if( !(a[i]%k) ){
            long long cnt = lp[a[i]/k]*rp[a[i]*k];
            ans += cnt;
        }
        lp[a[i]]++;
    }
    cout << ans << endl;
    return 0;
}
