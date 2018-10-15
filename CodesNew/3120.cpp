#include <bits/stdc++.h>
using namespace std;

int const MAX_N = 3e5+50, STEP=3e5+1;
int n, k;
int BIT[2*MAX_N], sum[MAX_N], a[MAX_N];

void Update(int x, int val){
    for( ; x>0; x -= x & -x)
        BIT[x] = min(BIT[x], val);
}

int Get(int x){
    int res = 1e9;
    for ( ; x<2*MAX_N; x += x & -x)
        res = min(res, BIT[x]);
    return res;
}

void Enter(){
    for(int i=0; i<2*MAX_N; i++) BIT[i]=1e9;
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        sum[i]=sum[i-1] + (a[i]==0);
    }
}

void Solve(){
    int L=0, R=0, kq = 0;
    Update(0+STEP, 0);
    for(int i=1; i<=n; i++){
        int res = Get(sum[i]-k+STEP);
        if (i-res>kq){
            kq=i-res;
            L=res+1;
            R=i;
        }
        Update(sum[i]+STEP, i);
    }
    for (int i=L; i<=R; i++) a[i]=1;
    cout << kq << '\n';
    for (int i=1; i<=n; i++) cout << a[i] << ' ';
}

int main(){
    Enter();
    Solve();
}
