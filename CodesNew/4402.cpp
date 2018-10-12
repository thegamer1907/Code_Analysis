#include <bits/stdc++.h>
using namespace std;

string s[500005];

int main(){
    cout.sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> s[i];
    for(int i = n-1; i >= 1; i--)
        if(s[i] > s[i+1])
            for(int j = 0; j < (int)s[i].size(); j++)
                if(s[i][j] > s[i+1][j])
                    s[i].resize(j);
    for(int i = 1; i <= n; i++)
        cout << s[i] << endl;
    return 0;
}