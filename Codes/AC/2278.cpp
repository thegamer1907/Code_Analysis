/*   You have lost, my dear   */
/*   Viva forever   */

#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#define mod 1000000007
using namespace std;
long long n,fr[10000002],divi[10000002];
bool prz[10000002];
void ciur()
{
    for(int i=2;i<=10000000;i++)
        if(!prz[i])
            for(int j=i;j<=10000000;j+=i)
                divi[i]+=fr[j],prz[j]=1;
    for(int i=2;i<=10000000;i++)
        divi[i]+=divi[i-1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int nr;
        cin>>nr;
        fr[nr]++;
    }
    ciur();
    int q;
    cin>>q;
    for(int i=1;i<=q;++i)
    {
        int a,b;
        cin>>a>>b;
        if(a>10000000 && b>10000000)
        {
            cout<<0<<'\n';
            continue;
        }
        b=min(b,10000000);
        cout<<divi[b]-divi[a-1]<<'\n';
    }
    return 0;
}
