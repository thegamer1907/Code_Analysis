#include  <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    long long t,n,a[1000000];
    cin >> t >> n;
    for(long long i = 1; i < t; i++)
    {
        cin >> a[i];
    }
    int flag = 0;
    int i = 1;
    int j = 1;
    while(i <= n)
    {
        long long ans = j+a[j];
        if(ans == n) {
            flag = 1;
            break;
        }
        j = ans;
        i = j;
    }
    if(flag == 1) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
