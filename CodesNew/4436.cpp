#include <bits/stdc++.h>

using namespace std;

int n, p[500005];
string s[500005];

int main()
{
    //ifstream cin ("data.in");
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> s[i];
    p[n] = s[n].length()-1;
    for (int i = n-1; i >= 0; --i){
        p[i] = 0;
        for (int j = 1; j <= p[i+1] && j < s[i].length(); ++j)
            if(s[i][j] == s[i+1][j])
                p[i] = j;
            else if(s[i][j] < s[i+1][j]){
                p[i] = s[i].length()-1;
                break;
            }else break;
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 0; j <= p[i]; ++j)
            cout << s[i][j];
        cout << "\n";
    }
    return 0;
}
