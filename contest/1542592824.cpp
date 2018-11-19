#include <bits/stdc++.h>
#define int long long
#define pii pair <int,int>
#define piii pair < int,pair<int,int> >
#define f first
#define s second
#define pb push_back
#define N 100005
#define mod 1000000009
#define inf 1000000000000000000

using namespace std;

main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s,a[105];
    cin>>s;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            cout<<"YES";
            return 0;
        }
    }
    int j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(a[i][1]==s[0] && a[j][0]==s[1])
            {
                cout<<"YES";
                return 0;
            }
        }
    cout<<"NO";
}
