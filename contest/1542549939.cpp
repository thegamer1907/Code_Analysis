#include <bits/stdc++.h>
#define ll long long
using namespace std;
int cnt[20];
int main()
{
    ios::sync_with_stdio(0);
    int x,n,k;

    cin>>n>>k;
    for(int i = 0;i<n;i++)
    {
        int s = 0;
        for(int j = 0;j<k;j++)
        {
            int x = 0;
            cin>>x;
            s  = s * 2+x;
        }
        cnt[s]++;
    }
    for(int i = 0;i<(1<<k);i++)
    {
        for(int j = 0;j<(1<<k);j++)
        {
            if(cnt[i]>0&&cnt[j]>0 && (i&j)  == 0)
            {
                return cout<<"YES"<<endl,0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
