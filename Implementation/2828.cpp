/*   You have lost, my dear   */

#include<bits/stdc++.h>
#pragma GCC optimize("O2")
#define mod 1000000007
using namespace std;
long long n;
vector<int>sol;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    if(n&1)
        sol.push_back(3),n-=3;
    while(n)
    {
        sol.push_back(2);
        n-=2;
    }
    cout<<sol.size()<<'\n';
    for(int i=0;i<sol.size();++i)
        cout<<sol[i]<<" ";
    return 0;
}
