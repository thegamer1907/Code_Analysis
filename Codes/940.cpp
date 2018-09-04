#include <bits/stdc++.h>
#define pb push_back
#define mod 1000000007

using namespace std;

typedef long long int ll;

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a, b;
    a.pb(0), b.pb(0);
    int a_ = 0, b_ = 0;
    for(int j = 0; j < n; j++){
        if(s[j] == 'a') a_++;
        else b_++;
        a.pb(a_);
        b.pb(b_);
    }
    int ans = 0;
    for(int j = 1; j <= n; j++){
        if(s[j-1] == 'a'){
            int r = b[j] - k;
            if(r < 0) r = 0;
            int pos = lower_bound(b.begin(), b.end(), r) - b.begin();
            ans = max(ans, a[j] - ((pos > 0)? a[pos - 1] : 0) + ((b[j] - k < 0)? b[j] : k));      //let this be remain 'a' and find the best ending here.
            
            if(k > 0){                        // change it to 'b' and find the best ending here.
                int r = a[j-1] - (k - 1);
                if(r < 0) r = 0;
                pos = lower_bound(a.begin(), a.end(), r) - a.begin();
                ans = max(ans, b[j-1] - ((pos > 0)? b[pos-1] : 0) + 1 + ((a[j-1] > (k-1))? (k-1) : a[j-1]));
            }
        }else{
            int r = a[j] - k;
            if(r < 0) r = 0;
            int pos = lower_bound(a.begin(), a.end(), r) - a.begin();
            ans = max(ans, b[j] - ((pos > 0)? b[pos - 1] : 0) + ((a[j] - k < 0)? a[j] : k));      //let this be remain 'b' and find the best ending here.
            
            if(k > 0){                        // change it to 'a' and find the best ending here.
                int r = b[j-1] - (k - 1);
                if(r < 0) r = 0;
                pos = lower_bound(b.begin(), b.end(), r) - b.begin();
                ans = max(ans, a[j-1] - ((pos > 0)? a[pos-1] : 0) + 1 + ((b[j-1] > (k-1))? (k-1) : b[j-1]));
            }
        }
    }
    cout << ans << endl;
    return 0;
}