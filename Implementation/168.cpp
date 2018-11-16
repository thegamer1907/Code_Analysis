#include <bits/stdc++.h>

using namespace std;

int n,a,b,p[10000];

int main()
{
    cin >> n >> a >> b;
    int sz;
    for(sz = 1; sz < n; sz *= 2);
    a += sz-1;
    b += sz-1;
    while(a){
        ++p[a];
        a /= 2;
    }
    int ans = 0;
    while(b){
        if(p[b])
            break;
        ++ans;
        b /= 2;
    }
    if((1<<ans) >= n)
        cout << "Final!";
    else
        cout << ans;
    return 0;
}
