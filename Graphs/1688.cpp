#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>

using namespace std;
vector <int> a[30004];
int n, t;
int dd[30004];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    cin>>n>>t;
    for (int i=1; i<=n-1; i++) {
        int a1;
        cin>>a1;
        a[i].push_back(a1+i);
    }
    queue <int> Q;
    Q.push(1);
    dd[1]=1;
    while (!Q.empty()) {
        int z=Q.front();
        Q.pop();
        if (z==t) {
            cout<<"YES";
            return 0;
        }
        for (int i:a[z]) {
            if (dd[i]==0) {
                dd[i]=1;
                Q.push(i);
            }
        }
    }
    cout<<"NO";
    return 0;
}
