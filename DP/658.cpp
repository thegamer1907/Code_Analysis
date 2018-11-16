#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define int long long
int cnt[200005];

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin>>s;
    for(int i = 1; s[i]; i++) {
        cnt[i] += cnt[i-1];
        if(s[i] ==s[i-1]) {
            ++cnt[i];
        }
    }
    int m;
    cin>>m;
    int l, r;
    while(m--) {
        cin>>l>>r;
        l--, r--;
        cout<<cnt[r]-cnt[l]<<"\n";
    }
    return 0;

}
