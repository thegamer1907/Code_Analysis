#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n= s.size();
    int ans[n];
    int v = 0;
    for (int i=1; i<n; i++) {
        if (s[i-1]==s[i]){
         v++;
       }
        ans[i]=v;
    }
    int t, l, r;
    cin >> t;
    ans[0] = 0;
    for (int i=0; i<t; i++) {
        cin >> l >> r;
        cout << ans[r-1]-ans[l-1] << endl;
    }
    return 0;
}
