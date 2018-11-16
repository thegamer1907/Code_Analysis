#include <bits/stdc++.h>
using namespace std;
#define speedio ios::sync_with_stdio(false);ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define reset(i,n) memset(i, n, sizeof(i))
#define set_bit(n,i) (n|=(1<<i))
#define get_bit(n,i) ((n >> i) &1)

int main()
{
    speedio;
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    (a ==b)?puts("YES"):puts("NO");
    return 0;
}
