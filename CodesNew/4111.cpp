#include <bits/stdc++.h>

using namespace std;

const int MAXN=2*1e5+5;

int main(){
    long long int n, q, a[MAXN], b[MAXN], wsum=0, cs, idx;
    vector<long long int> ps;
    cin >> n >> q;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<q;i++) cin >> b[i];
    for(int i=0;i<n;i++) wsum+=a[i];
    ps.push_back(a[0]);
    for(int i=1;i<n;i++) ps.push_back(ps[i-1]+a[i]);
    cs = wsum;
    for(int i=0;i<q;i++){
        cs-=b[i];
        if(cs<=0){
            cout << n << endl;
            cs = wsum;
            continue;
        }
        idx = lower_bound(ps.begin(), ps.end(), wsum-cs+1)-ps.begin();
        cout << n-idx << endl;
    }
    return 0;
}
