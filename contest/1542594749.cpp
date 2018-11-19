#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin>>s;
    int n;
    cin>>n;
    map<char, bool> first, second;
    for (int i=0; i<n; i++) {
        string t;
        cin>>t;
        if (t==s) {
            cout<<"YES";
            exit(0);
        }
        second[t[0]]=true;
        first[t[1]]=true;
    }
    if (first[s[0]] && second[s[1]])
        cout<<"YES";
    else cout<<"NO";
}