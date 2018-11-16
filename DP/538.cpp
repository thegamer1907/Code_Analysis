#include <bits/stdc++.h>

using namespace std;

int csum[100010]; //C: cumulative

int main()
{
    string s;
    cin >> s;
    int len = s.size();

    for(int i=len-2; i>=0; i--) {
        csum[i] = csum[i+1];
        if(s[i]==s[i+1]) {
            csum[i]++;
        }
        //cout << "sum= " << csum[i] << endl;
    }
    int q, ans=0;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        ans = csum[l-1]-csum[r-1];
        //cout << csum[l-1] << " " << csum[r-1] << endl;
        cout << ans << endl;
    }
    return 0;
}
