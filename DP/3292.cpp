/*   You have lost, my dear   */
/*   Viva forever   */

#include<bits/stdc++.h>
#pragma GCC optimize("O2")
#define mod 1000000007
using namespace std;
long long a,b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>a>>b;
    long long pa=1;
    long long pb=1;
    while(pa*2<=a)
        pa*=2;
    while(pb*2<=b)
        pb*=2;
    if(pb>pa)
    {
        cout<<2*pb-1<<'\n';
        return 0;
    }
    if(a==b)
    {
        cout<<0;
        return 0;
    }
    long long aa=0;
    long long bb=0;
    for(int i=60;i>=0;--i)
    {
        long long mare=(1LL<<i);
        if(mare>b)
            continue;
        if(aa+mare-1<a)
        {
            aa+=mare,bb+=mare;
            continue;
        }
        if(aa<=bb && aa+mare<=b)
            aa+=mare;
        else
            if(bb+mare<=b)
                bb+=mare;
    }
    cout<<(aa^bb);
    return 0;
}
