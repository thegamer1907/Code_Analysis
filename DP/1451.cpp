#include<bits/stdc++.h>

using namespace std;
int a[1111];
int main()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int ans=0;
    for (int i=0;i<n;i++)
        for (int j=i;j<n;j++)
        {
            int t=0;
            for (int k=0;k<n;k++)
            {
                if (i<=k&&k<=j) t+=1-a[k];
                else t+=a[k];
            }
            ans=max(ans,t);
        }
    cout << ans << endl;
    return 0;
}