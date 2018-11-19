#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef long long int ll;
typedef vector< pair<int, int> > vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<long long int> vll;
typedef pair<int, int> pii;

const ll INF = 1e18;
const int inf = 1e9;
const int MOD = 1e9 + 7;
const int nax = 1000000 + 10;

int n, arr[nax];
int main()
{
    ios::sync_with_stdio(0);
    string s;
    cin >> s;
    cin >> n;
    char ch1 = s[0], ch2 = s[1];
    int flag1 = 0, flag2 = 0;
    for(int i = 1; i <= n; i++)
    {
        string s1;
        cin >> s1;
        if(s1 == s)
        {
            cout << "YES";
            return 0;
        }
        if(s1[1] == s[0])
            flag1 = 1;
        if(s1[0] == s[1])
            flag2 = 1;
    }
    if(flag1 == 1 && flag2 == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
