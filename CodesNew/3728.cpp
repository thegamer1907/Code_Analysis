#include<bits/stdc++.h>

using namespace std;

const int maxn=111;
int n,m;
int a[maxn];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    int mx=-1;
    long long s=0;
    for (int i=1;i <=n;i++) {
        cin>>a[i];
        mx=max(mx,a[i]);
        s+=a[i];
    }
    cout << max((long long)mx,(s+m+n-1)/n) <<  " " <<  mx+m <<endl;
}
