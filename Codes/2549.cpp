#include<bits/stdc++.h>
using namespace std;

const int mx = 1e7+1;
int n, q, x, y, s[mx], red[mx], ans[mx];

void fact(int h){
    while(h != 1){
        int l = red[h];
        if(h%l == 0) ans[l]++;
        while(h%l == 0) h /= l;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    s[1] = 1;
    for(int i = 2 ; i < mx ; i++) if(!s[i]){
        red[i] = i;
        for(int j = i+i ; j < mx ; j += i)
            s[j] = i, red[j] = i;
    }
    cin >> n;
    while(n-- && cin >> x)
        fact(x);
    for(int i = 1 ; i < mx ; i++)
        ans[i] += ans[i-1];
    cin >> q;
    while(q-- && cin >> x >> y)
        cout << ans[min(mx-1, y)]-ans[min(mx-1, x)-1] << endl;
    return 0;
}
