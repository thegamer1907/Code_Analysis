#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n, k;
    cin >> n >> k;
    vector < int > a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int s = 0, kk = 0, mn = 1e9, nn = 1;
    for (int i = 0; i < n; ++i){
        if (kk < k)++kk, s += a[i];
        if (kk == k){
            if (mn > s){
                mn = s;
                nn = i - k + 2;
            }
                s -= a[i - k + 1];
            --kk;
        }

    }
    if (mn > s && kk == k){
        mn = s;
        nn = (n - 1) - k + 2;
        s -= a[nn - 1];
        --kk;
    }
    cout <<
//         mn << " " <<
         max(nn, 1);
}
