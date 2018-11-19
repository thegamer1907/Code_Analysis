#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int num[35];
int n,k;
int main()
{
    cin>>n>>k;
    for (int i=0;i<n;i++)
    {
        int ans=0;
        for (int j=0;j<k;j++)
        {
            int a;
            cin>>a;
            ans=ans*2+a;
        }
        num[ans]++;
    }
    int Max=1<<k;
    if (num[0])
    {
        cout<<"YES\n";
        return 0;
    }
    for (int i=1;i<Max;i++)
    {
        for (int j=i+1;j<Max;j++)
        {
            if (!(i&j))
            {
                if (num[i]&&num[j])
                {
                    cout<<"YES\n";
                    return 0;
                }
            }
        }
    }
    cout<<"NO\n";
    return 0;
}
