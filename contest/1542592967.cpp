#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include<set>
using namespace std;
typedef long long ll;

#define inf int(0x3f3f3f3f)
#define mod int(1e9+7)
#define pi acos(-1.0)

ll n;

ll a[1000005];

char s[10005][5];
char ss[5];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>ss;
    int n;
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i][0]==ss[0]&&s[i][1]==ss[1])
            flag=1;
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(s[i][1]==ss[0])
            {
                for(int j=0;j<n;j++)
                {
                    if(s[j][0]==ss[1])
                    {
                        flag=1;
                        break;
                    }
                }

            }
            if(flag)
                break;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
