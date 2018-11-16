#include<bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
#define int long long

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int n,a,b;
    cin>>n>>a>>b;
    if (a>b)
    swap(a,b);
    int ans = 1;
    while (true)
    {
        if (n == 2)
        {
            cout<<"Final!";
            return 0;
        }
        if (abs(a-b)<=1 && a%2 == 1)
        {
            cout<<ans;
            return 0;
        }
        if (a % 2 == 0)
            a = (a-2)/2 + 1;
        else if (a % 2 == 1)
            a = (a-1)/2 + 1;
        if (b % 2 == 0)
            b = (b-2)/2 + 1;
        else if (b % 2 == 1)
            b = (b-1)/2 + 1;
        ans ++;
        n /=2;
    }
    return 0;
}