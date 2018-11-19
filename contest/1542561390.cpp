#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define LL long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n;
    cin>>n;
    string a[200];
    int f=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(s==a[i])
        {
            f=1;
        }
    }
    if(f==0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][1]==s[0]&&a[j][0]==s[1])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
        }
    }
    if(f==0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
}

