//#include<fstream>
#include <iostream>
using namespace std;
//ifstream cin("a.in");
//ofstream cout("a.out");
int n,q,i;
long long v[200001],sum[200001],k,life,poz,poz2,in,sf,mij;
int main()
{
    std::ios::sync_with_stdio(false);
    cin>>n>>q;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        sum[i]=sum[i-1]+v[i];
    }
    poz=1;
    life=v[1];
    while(q--)
    {
        cin>>k;
        if(k<life)
        {
            life-=k;
        }
        else if(k==life)
        {
            poz++;
            if(poz>n)
            {
                poz=1;
            }
            life=v[poz];
        }
        else if(poz!=n)
        {
            k-=life;
            in=poz+1;
            sf=n;
            poz2=0;
            while(in<=sf)
            {
                mij=(in+sf)/2;
                if(sum[mij]-sum[poz]<=k)
                {
                    poz2=mij;
                    in=mij+1;
                }
                else
                {
                    sf=mij-1;
                }
            }
            if(poz2==0)
            {
                poz++;
                life=v[poz]-k;
            }
            else
            {
                k=k-sum[poz2]+sum[poz];
                poz=poz2;
                poz++;
                if(poz>n)
                {
                    poz=1;
                    k=0;
                }
                life=v[poz]-k;
            }
        }
        else
        {
            poz=1;
            life=v[1];
        }
        cout<<n-poz+1<<'\n';
    }
    return 0;
}
