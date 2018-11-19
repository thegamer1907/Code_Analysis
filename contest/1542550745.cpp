#include <bits/stdc++.h>

using namespace std;

#define PB push_back
#define R first
#define L second

typedef long long LL;
typedef pair<int, int> PII;

bool flag1, flag2;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        string p;
        cin >> p;
        if(p == s)
            return cout << "YES" << endl, 0;
        if(p[1] == s[0])
            flag1 = true;
        if(p[0] == s[1])
            flag2 = true;
    }
    if(flag1 and flag2)
        return cout << "YES" << endl, 0;
    cout << "NO" << endl;
    return 0;
}
