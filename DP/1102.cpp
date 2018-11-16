#include<bits/stdc++.h>
using namespace std;
#define For(i,a,n,r) for(long long i = a; i*r <= n*r; i += r)
long long n,a[1000111],f[5000],res=0,s[1000111];
int main() {
    cin >> n;
    For(i,1,n,1) {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    For(i,1,n,1) {
        For(j,1,i,1) {
            long k = s[i]-s[j-1];
            res = max(res,(i-j+1)-k+(s[n]-k));
        }
    }
    cout << res;

}
