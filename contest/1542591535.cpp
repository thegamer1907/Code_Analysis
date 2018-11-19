#include <bits/stdc++.h>
#define pii pair<int, int>
#define VI vector < int >
#define PB push_back
#define FOR(i,a,b) for(i=a;i<b;i++)
#define FORD(i,a,b) for(i=a;i>b;i--)
typedef long long LL;
using namespace std;
int main()
{
    int i,j,k,n,t;
    char a[2];
    cin>>a[0]>>a[1];
    cin>>n;
    char b[n][2];
    int ans =0, ans1 = 0;
    for(i=0;i<n;i++)
    {
        cin>>b[i][0]>>b[i][1];
        if(b[i][0]==a[0] && b[i][1]==a[1])
        {
            cout<<"YES";
            return 0;
        }
            if(b[i][0] ==a[1] && ans ==0)
            {
                ans++;
            }

            if(b[i][1] == a[0] && ans1 ==0)
                ans1++;
    }
    if(ans + ans1== 2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

