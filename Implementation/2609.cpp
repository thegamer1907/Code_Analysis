#include <bits/stdc++.h>

using namespace std;

long long n,p,q,diff;

int main()
{
    ios::sync_with_stdio(0);
    diff=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> p >> q;
        if(q-p>=2)diff++;
    }
    cout << diff;

    return 0;
}
