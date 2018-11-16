#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(i=j;i<k;i++)

int main() {
    int n;
    cin>>n;
    int a[n], i;
    rep(i,0,n) cin>>a[i];

    int ma=0, j;
    // cout<<n<<endl;
    rep(i,0,n) {
        rep(j,i,n) {
            int c=0, k;
            rep(k,0,n) {
                if(k>=i && k<=j) {
                    if(a[k] == 0) c++;
                }
                else if(a[k] == 1) c++;
            }
            // cout<<i<<" "<<j<<" "<<c<<endl;
            ma = max(c, ma);
        }
    }
    cout<<ma<<endl;
    return 0;
}