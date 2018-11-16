/*   You have lost, my dear   */
/*   Viva forever   */

#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#define mod 1000000007
#define fi first
#define se second
using namespace std;
long long a,n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>a>>n;
    int sol=0;
    while(a<=n)
        ++sol,a*=3,n*=2;
    cout<<sol<<'\n';
    return 0;
}
