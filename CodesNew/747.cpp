#include<bits/stdc++.h>
using namespace std;

int n,m;
char a[1006][506];
char b[1006][506];

void solve(void)
{
    while(cin>>n>>m)
    {
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
            cin>>a[i];
        for(int i = 0 ; i < m ; i++)
        {
            cin>>b[i];
            for(int j = 0 ; j < n ; j++)
            {
                if(strcmp(a[j],b[i])==0)
                {
                    ans++;
                    break;
                }
            }
        }
        if(ans%2==1)
        {
            if(n>=m) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            if(n>m) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}

int main(void)
{
    solve();
    return 0;
}
