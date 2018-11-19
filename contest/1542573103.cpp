#include <bits/stdc++.h>
#define S second
#define F first
#define ll long long
#define pb push_back

using namespace std;

map < int, int > h;

int main() {
    ios_base::sync_with_stdio(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n,k;
    cin >> n >> k;
    int si=0;
    if (k==1) si=1;
    if (k==2) si=2;
    if (k==3) si=4;
    if (k==4) si=8;
    for (int i(0); i<n; i++) {
        int sy=si, os=0;
        for (int j(0); j<k; j++) {
            int x;
            cin >> x;
            os+=x*sy;
            sy/=2;
        }
        //cout << os << endl;
        h[os]++;
    }
    if (h[0]>0) {
        cout << "YES" << endl;
        return 0;
    }
    //cout << (2 & 1) << endl;
    for (int j(1); j<16; j++) {
        for (int i(2); i<16; i++) {

            if (h[j]>0 && ((j & i)==0) && h[i]>0) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}