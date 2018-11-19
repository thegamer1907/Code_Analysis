    #include <bits/stdc++.h>
     
    using namespace std;
     
    const int N = 2000;
   
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

    //  1
        string s;
        cin >> s;
        int n;
        cin >> n;
        bool f = 0;
        vector<string> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
            if (h[i] == s) f = 1;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                //if (i == j) continue;
                if (h[i][1] == s[0] && h[j][0] == s[1]) f = 1;
            }
        }
        if (f) cout << "YES";
        else cout << "NO";
        return 0;
    }