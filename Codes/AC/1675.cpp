#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, k;

LL calc(LL mid){
    LL res = 0;
    mid--;
    for(int i = 1;i <= n;++i)res += min(mid / i, m);
    return res;
}

int main(){
    cin >> n >> m >> k;
    if(n > m)swap(n, m);
    LL low = 0, high = 1LL << 60, mid;
    while(low < high - 1){
        mid = (low + high) >> 1;
        if(calc(mid) <= k - 1)low = mid;
        else high = mid;
    }
    cout << low << endl;
    return 0;
}
