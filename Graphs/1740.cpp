#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 100;
int a[maxn];
bool cango[maxn];
int main(){
    int n ,m; cin >> n >> m; int pos = 1;
    for(int i = 1 ; i <= n - 1 ; i++)
        cin >> a[i];
    while(pos <= m){
        cango[pos] = 1;
        if(pos == m) break;
        pos += a[pos];
    }
    if(cango[m])
        return cout << "YES" ,0;
    return cout << "NO" ,0;
}
