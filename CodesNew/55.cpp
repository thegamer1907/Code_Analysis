#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
unsigned long long ULL;

const int inf = 1000111222;
const int N = 100007;
int A[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, l; cin>>n>>l;
    for(int i=0; i<n; i++) cin>>A[i];
    sort(A, A+n);
    int res = 0;
    for(int i=1; i<n; i++){
        int x = A[i] - A[i-1];
        if(res < x) res = x;
    }
    if(res < 2*A[0]) res = 2*A[0];
    if(res < 2*(l - A[n-1])) res = 2*(l - A[n-1]);
    cout<<fixed<<setprecision(10);
        cout<<res/2.0<<"\n";
    return 0;
}

