#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll nx,n,n2,a,b,k;
    cin >> n;
    n2=n/2;
    ll kmin=1,kmax=n/10;
    while(kmin<kmax) {
        nx = n;
        a = b = 0;
        k = (kmin+kmax)/2;
        while (nx>0 && b<=n2) {
            if (nx>k) {nx-=k; a+=k;}
            else {a+=nx;nx=0;}
            b += nx/10; nx -= nx/10;
        }
        if (b>n2) kmin = k+1;
        else kmax = k;
    }
    cout << kmin;
}
