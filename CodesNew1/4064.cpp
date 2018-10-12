#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxn = 2e5+10;
int n , q;
ll a[maxn] , b[maxn];
ll sum[maxn];
int main()
{
    cin >> n >> q;
    for(int i = 1; i <= n ; i ++){
        scanf("%I64d" , &a[i]);
        sum[i] = sum[i-1] + a[i];
    }
    ll now = 0;
    while(q --){
        ll k;
        scanf("%I64d" , &k);
        now += k;
        if(sum[n] <= now){
            printf("%d\n" , n);
            now = 0;
            continue;
        }
        int pos = upper_bound(sum+1 , sum + 1 + n , now) - sum - 1;
        //cout << "pos = " << pos  <<endl;
        printf("%d\n" , n - pos);
    }
    return 0;
}
