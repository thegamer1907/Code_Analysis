#include <bits/stdc++.h>
#define sc second
#define fr first

using namespace std;

typedef long long ll;

string pass,s[111];
ll n,ct1,ct2;
int main()
{
    //freopen("F.in","r",stdin);
    //freopen("F.out","w",stdout);
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> pass >> n;
	for (ll i=0;i<n;++i)
    {
        cin >> s[i];
        if (s[i]==pass)
        {
            cout << "YES";
            return 0;
        }
        if (s[i][0]==pass[1]) ct1++;
        if (s[i][1]==pass[0]) ct2++;
        if (ct1 && ct2)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
