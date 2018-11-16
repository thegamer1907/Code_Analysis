//ThE.EnD.AnD.ThE.BeGiNiNg ;
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
const int N=1e2+10 ;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,k=0 ;
    cin >> n >> m ;
    while(n<m){
        if (m%2) m++,k++;
        else m/=2,k++;
    }
    cout << k+n-m ;
    return 0 ;
}
