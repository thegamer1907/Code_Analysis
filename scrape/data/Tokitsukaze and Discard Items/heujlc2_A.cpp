#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pos[100005];
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll k1=k;
    for(int i=0; i<m; i++)
        cin>>pos[i];
    ll cnt=1;
    ll num=0;
    ll last=0;
    int flag=1;
    if(pos[0]>k)
        if(pos[0]%k1==0)
             k=pos[0];
        else
            k=pos[0]/k1*k1+k1;
    for(int i=0; i<m; i++)
    {
        if(pos[i]-last<=k)
        {
            num++;
            flag=1;
        }
        else
        {
            if(flag)
            {
                i--;
                flag=0;
                last=num;

                cnt++;
            }
            else
            {
                if((pos[i]-last)%k1==0)
                    k=pos[i]-last;
                else
                    k=(pos[i]-last)/k1*k1+k1;
                i--;

            }

        }

    }
    cout<<cnt<<endl;

}