#include <bits/stdc++.h>

using namespace std;

int n,dp[1000],m,l,r;
string a[300];
void load() {
    #ifndef ONLINE_JUDGE
    freopen("d.inp","r",stdin);
    freopen("d.out","w",stdout);
    #endif // ONLINE_JUDGE
}

int check(int cs) {

    for (int i = 1 ; i < 10 ; ++ i)
    for (int j = 0 ; j < (1 << i) ; ++ j) {
        string s = "";
        for (int k = 0 ; k < i ; ++ k)
            if (j & (1<<k))
            s +=  '1';
        else
            s += '0';
        if (a[cs].find(s,0) == -1)
            return i-1;
    }

}
void process() {

    cin >> n;
    for (int i = 1 ; i <= n ; ++ i)
        cin >> a[i];

    cin >> m;
    for (int i = 1 ; i <= m ; ++ i) {
        cin >> l >> r;
        a[i+n] = a[l] + a[r];
        if (a[i + n].size() > 1000)
            a[i+n] = a[i+n].substr(0,500) + a[i+n].substr(a[i+n].size() - 500 , 500);

        dp[i+n] = max(check(i+n),max(dp[l],dp[r]));
        cout << dp[i+n] << endl;
    }
}
int main()
{
    load();
    process();
    return 0;
}
