#include <bits/stdc++.h>

using namespace std;

const int N = 1e2 + 7;
string t[N];

int main()
{
    //freopen("input.txt", "r", stdin);
    string s;
    cin >> s;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> t[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            char l1 = t[i][0];
            char r1 = t[i][1];
            char l2 = t[j][0];
            char r2 = t[j][1];
            //cout << l1 << ' ' << r1 << ' ' << l2 << ' ' << r2 << endl;
            string s1, s2, s3;
            s1 += r2;
            s1 += l1;
            s2 += r1;
            s2 += l2;
            s3 += l1;
            s3 += r1;
        //    cout << s1 << ' ' << s2 << endl;
            if (s1 == s || s2 == s || s3 == s) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
