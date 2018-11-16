#include <bits/stdc++.h>
#define ll long long
#define uint unsigned int
#define END cout<<rasp;return 0;
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

    unsigned int n,m,rasp = 0;
    cin >> n >> m;

    while(m != n)
        {
            if (m & 1 || n > m)
            {
                m++;
            }
            else
                m >>= 1;
            rasp ++;
        }
    END


    #ifndef ONLINE_JUDGE
        cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    return 0;
}



