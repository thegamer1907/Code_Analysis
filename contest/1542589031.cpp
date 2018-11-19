#include <bits/stdc++.h>
#define maxn 105

using namespace std;
string s, v[maxn];
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    //freopen("inp.txt","r",stdin);
    cin >> s >> n;
    for (int i = 1; i <= n; i++) cin >> v[i];
    int thang = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            string dcm = v[i] + v[j];
            for (int k = 0; k <= 1; k++)
            {
                string dcm1 = dcm.substr(k, 2);
                if (dcm1 == s) thang ++;
            }
        }
    if (thang >= 1) cout << "YES";
    else cout << "NO";
}
