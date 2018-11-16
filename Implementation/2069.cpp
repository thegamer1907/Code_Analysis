#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int sx, sy, sz;
    sx = sy = sz = 0;

    cin>>n;
    while(n--){
        int x, y, z;
        cin>>x>>y>>z;
        sx += x;
        sy += y;
        sz += z;
    }

    if((sz||sx||sy))
        cout<<"NO";
    else cout<<"YES";
}
