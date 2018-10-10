#include<iostream>

using namespace std;

int main() {
    long long n, m, k; cin >> n >> m >> k;
    long long lo=0, hi=n*m+5, mid;
    while(lo+1<hi) {
        mid=(hi+lo)/2;
        long long num=0;
        for(long long i =1; i<=m; i++) {
            num+=min(n,mid/i);
        }
        if(num<k) {
            lo=mid;
        }
        else {
            hi=mid;
        }
    }
    cout << hi << endl;
}
