#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

main()
{
    ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    int n;
    int cnt1[26] = {}, cnt2[26] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        string t;
        cin >> t;
        cnt2[t.front() - 'a'] = 1;
        cnt1[t.back() - 'a'] = 1;
        if(t == s){
            cout << "YES" << endl;
            exit(0);
        }
    }
    if(cnt1[s.front() - 'a'] && cnt2[s.back() - 'a']){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}
