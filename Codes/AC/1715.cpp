#include <iostream>
#include <algorithm>
using namespace std;

int n, m;

long long lessNum (long long k){
    long long ret = 0, a;
    for(int i=1; i<=n; i++){
        a = (k - 1) / i;
        if (a > m) a = m;
        ret += a;
    }
    return ret;
}

int main()
{
    long long k;
    cin>>n>>m>>k;
    long long l, r, mid;
    l = 1, r = m * (long long)n + 1;
    while(l < r - 1){
        mid = (l + r) / 2;
        long long a = lessNum(mid);
        if (a < k){
            l = mid;
        }
        else {
            r = mid;
        }
    }
    cout<<l<<endl;
    return 0;
}
