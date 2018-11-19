#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define FILE "answer"
#define pii pair <int,int>

using namespace std;

const ll mod = 1e9 + 7;
const ll inf = 1e18;

int a[228],b[228];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        string ss;
        cin >> ss;
        if (ss == s){
            cout << "YES";
            return 0;
        }
        a[ss[0]]++;
        b[ss[1]]++;
    }
    if ((a[s[1]] > 0 && b[s[0]])) cout << "YES";
    else cout << "NO";

}