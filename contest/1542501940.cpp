#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define mod 1000000007;

int main() { 
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    string pass;
    int n;
    cin>>pass>>n;
    bool f = false, p1 = false, p2 = false;
    for(int i=0; i<n; i++) {
        string s;
        cin>>s;
        if(s == pass) {
            f = true;
        }
        if(s[1] == pass[0]) {
            p1 = true;
        }
        if(s[0] == pass[1]) {
            p2 = true;
        }
    }
    if(f || (p1 && p2)) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}