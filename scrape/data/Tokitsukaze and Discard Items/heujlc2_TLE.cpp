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
    while(pos[0]>k)
        k+=k1;
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
                k+=k1;
                i--;
              
            }

        }

    }
    cout<<cnt<<endl;

}