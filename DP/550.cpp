#include <iostream>

using namespace std;

const int MAXN = 100010;
int a[MAXN];
int sum[MAXN];

int main()
{
    int n = 0;
    string s;
    cin >> s;
    n = s.size();
    for(int i = 1; i < n; i ++){
        if(s[i - 1] == s[i])
            a[i] = 1;
    }
    for(int i = 1; i < n; i ++){
        sum[i] = a[i] + sum[i-1];
    }
    int m;
    cin >> m;
    int l, r;
    for(int i = 0; i < m; i ++){
        cin >> l >> r;
        cout << sum[r-1] - sum[l-1] << endl;
    }
    return 0;
}
