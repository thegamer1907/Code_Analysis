#include <bits/stdc++.h>

using namespace std;

int n;
int a[200010];

main()
{
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    long long sum1 = 0, sum3 = 0;
    int lo = -1, hi = n;
    long long an = 0;
    while(lo < hi){
        sum1 += a[lo+1];
        lo++;
        while(hi-1 > lo && a[hi-1] + sum3 <= sum1){
            sum3 += a[hi-1];
            hi--;
        }
        if(sum1 == sum3) an = sum1;
    }
    cout << an << endl;
}
