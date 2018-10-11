#include <bits/stdc++.h>

using namespace std;

const int MAXN=1e5+4;

int main(){
    int n, a[MAXN], mink=2*1e9;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        a[i]-=i;
        if(a[i] <= 0) return (cout << i+1, 0);
    }
    for(int i=0;i<n;i++){
        mink = min(mink, a[i]/n+(a[i]%n==0?0:1));
    }
    for(int i=0;i<n;i++){
        if((a[i]/n+(a[i]%n==0?0:1)) == mink) return (cout <<i+1, 0);
    }
    return 0;
}
