#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

string s;

vector<int> pref(const string &s){
    int n = s.length();
    vector<int> pi(n);
    for(int i = 1; i < n; i++){
        int j = pi[i - 1];
        while(j > 0 && s[j] != s[i]) j = pi[j - 1];
        if(s[i] == s[j]) j++;
        pi[i] = j;
    }
    return pi;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin >> s;
    vector<int> pi = pref(s);
    set<int> q;
    for(int i = 1; i < (int)s.length() - 1; i++) q.insert(pi[i]);
    int j = pi[(int)s.length() - 1];
    while(j > 0){
        if(q.count(j)){
            for(int i = 0; i < j; i++){
                cout << s[i];
            }
            cout << endl;
            exit(0);
        }
        j = pi[j - 1];
    }
    cout << "Just a legend" << endl;
}
