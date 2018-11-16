#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
unsigned long long ULL;

const int inf = 1000111222;
const int N = 100007;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, t; cin>>n>>t;
    int i, A[N];
    for(i=1; i<n; i++) cin>>A[i];
    bool flag = true;
    int next = 0;
    for(i=1; i<n;){
        next = i + A[i];
        if(next==t || t==1) break;
        i = next;
    }
    if(i==n) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}

