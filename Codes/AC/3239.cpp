#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int minn=2e9,ans=0;
        for(int i=1; i<=n; i++)
        {
            int add,k;
            cin>>add;
            k=add;
            add/=n;
            add*=n;
            add+=i;
            if(add<=k)
                add+=n;
            //cout<<add<<' ';
            if(add<minn)
            {
                minn=add;
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
}
