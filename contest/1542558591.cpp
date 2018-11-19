#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define LL long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<(2&2)<<endl;
    int n,k;
    cin>>n>>k;
    int a[20]={0};
    for(int i=0;i<n;i++)
    {
        int x=0;
        for(int j=0;j<k;j++)
        {
            int y;
            cin>>y;
            if(y)
            {
                x+=(1<<j);
            }
        }
       // cout<<x<<endl;
        a[x]++;
    }
    if(a[0]!=0)
    {
        cout<<"Yes";
        return 0;
    }
    for(int i=0;i<=(1<<k)-1;i++)
    {
        int t=0;
            for(int j=0;j<=(1<<k)-1;j++)
            {
                t=0;
                //cout<<i<<" "<<j<<endl;
                if((i&j)==0&&i!=j)
                {
                    //cout<<i<<" =========="<<j<<"====="<<endl;
                    t=min(a[i],a[j]);

                    //cout<<t<<endl;
                }
                if(t!=0)
                {
                    cout<<"Yes";
                    return 0;
                }
            }

    }
    cout<<"No";
}

