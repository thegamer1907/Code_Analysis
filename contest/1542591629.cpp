#include <bits/stdc++.h>
#define pii pair<int, int>
#define mp make_pair
#define F first
#define S second
#define PB push_back
#define N 100005
#define maxc 1000000007

using namespace std;

int n;
string s, w[102];
int main()
{
    cin >> s; cin >> n;
    for (int i = 1; i <= n; i++) cin >> w[i];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            string z = w[i] + w[j];
            if (z.find(s) != -1)
            {
                cout <<"YES";
                return 0;
            }
        }
    cout <<"NO";
}
