#include <bits/stdc++.h>
#define ll long long int
#define pt pair<ll,ll>
#define x first
#define y second
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.precision(10);
    cout << fixed;
    #ifndef ONLINE_JUDGE
        ifstream cin(".in");
        ofstream cout(".out");
    #endif


    int n,k,s = 240,r = 0 ;
    cin>>n>>k;


    for(int i = 1; i <= n;++i)
        if (s - k - i * 5 >= 0)
            s-=i*5,++r;

    cout<<r;



    #ifndef ONLINE_JUDGE
        cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    return 0;
}



