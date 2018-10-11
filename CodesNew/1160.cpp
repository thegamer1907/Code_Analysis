#include <bits/stdc++.h>
#define rep1(i,a,b) for (int i = a;i <= b;i++)

using namespace std;

const int N = 1e5;

int n;
int a[N+10],mi;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> n;
    rep1(i,1,n) cin >> a[i];
    mi = a[1];rep1(i,1,n) mi = min(mi,a[i]);
    int quan = mi/n;
    rep1(i,1,n) a[i] -= quan*n;
    int past = 0;
    rep1(i,1,n){
        if (a[i]-past<=0){
            cout<<i<<endl;
            return 0;
        }
        past++;
    }

    rep1(i,1,n){
        if (a[i]-past<=0){
            cout<<i<<endl;
            return 0;
        }
        past++;
    }
    return 0;
}
