#include<bits/stdc++.h>
using namespace std;
#define ll 2222222222222222222222
char x, y, l, r;
map<char, int> mpl, mpr;
int n, i, j;
main(){
    cin >> x >> y;
    cin >> n;
    for (i = 1; i<= n; ++i){
        cin >> l >> r;
        if (l == x && r == y){cout<<"YES"; return 0;}
        mpl[l] = 1;
        mpr[r] = 1;
      //  if (mpl[x] == 1 && mpr[y] == 1) {cout<<"YES"; return 0;}
        if (mpl[y] == 1 && mpr[x] ==1) {cout<<"YES"; return 0;}
    }
    cout<<"NO";

}

