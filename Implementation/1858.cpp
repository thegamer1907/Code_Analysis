#include<bits/stdc++.h>

using namespace std;

int main(void){
    int n, x, y, z, X = 0, Y = 0, Z = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x >> y >> z;
        X += x, Y += y, Z += z;
    }
    if(X || Y || Z)puts("NO");
    else puts("YES");
}