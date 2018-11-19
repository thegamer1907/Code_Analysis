#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;

int n,k;

bool mp[maxn][5];
int num[5];
int kkk[maxn];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
            cin>>mp[i][j];
    }
    if(k==1)
    {
        bool flag = false;
        for(int i=0; i<n; i++)
            if(!mp[i][0])
                flag = true;
        cout<<(flag?"YES":"NO")<<endl;
    }
    else if(k==2)
    {
        bool flag = false;
        bool cnt1 = 0;
        bool cnt2 = 0;
        for(int i=0; i<n; i++)
        {
            if(!mp[i][0]&&!mp[i][1])
            {
                flag = true;
                break;
            }
            if(mp[i][0]==0&&mp[i][1]==1)
            {
                cnt1 = 1;
            }
            if(mp[i][0]==1&&mp[i][1]==0)
            {
                cnt2 = 1;
            }
        }
        if(flag||(cnt1&&cnt2))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        bool flag = false;
        for(int i=0; i<n; i++)
        {
            int num = 0;
            for(int j=0; j<k; j++)
                if(mp[i][j])
                    num|=1<<j;
            kkk[num]++;
        }
        for(int i=0; i<1<<k; i++)
            for(int j=0; j<1<<k; j++)
            {
                if((i&j)==0)
                {
                    if(kkk[i]&&kkk[j])
                        flag = true;
                }
            }
        if(flag)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
