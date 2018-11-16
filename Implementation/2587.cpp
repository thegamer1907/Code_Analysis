/*   You have lost, my dear   */

#include<bits/stdc++.h>
#pragma GCC optimize("O2")
#define mod 1000000007
using namespace std;
long long n,k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    int sol=0;
    for(int i=1;i<=n;++i)
    {
        int nr;
        cin>>nr;
        if(nr>k)
            sol+=2;
        else
            ++sol;
    }
    cout<<sol;
    return 0;
}
