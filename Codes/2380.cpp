#include<bits/stdc++.h>
using namespace std;
long long i,j,n,m,mas[10000007],ab[10000007],a,z[12000000],k[12000000],kk,li,l,r;
int main()
{
    cin >> n;
    i=0;
    while (i<n)
    {
        scanf("%d",&a);
        //cin >> a;
        li=max(li,a);
        mas[a]++;
        i=i+1;
    }
    i=2;
    while (i<=10000000)
    {
        j=2*i;
        if (z[i]==0)
        {
            while (j<=10000000)
            {
                ab[i]+=mas[j];
                z[j]=1;
                j=j+i;
            }
            ab[i]+=mas[i];
        }
        i=i+1;
    }
    /*kk=0;
    i=2;
    while (i<=10000000)
    {
        if (z[i]==0)
        {
            k[kk]=i;
            kk++;
        }
        i=i+1;
    }*/

    /*i=0;
    while ((i<kk)and(k[i]<=li))
    {
        j=k[i];
        while ((j<=li))
        {
            ab[k[i]]+=mas[j];
            j+=k[i];
            //cout << li << " " << j << "\n";
        }
        i=i+1;
    }*/


    i=1;
    while (i<=li)
    {
        //cout << i << " " << ab[i] << "\n";
        ab[i]=ab[i]+ab[i-1];
        i=i+1;
    }

    cin >> m;
    i=0;
    while (i<m)
    {
        //cin >> l >> r;
        scanf("%d %d",&l,&r);
        l=min(l-1,li);
        r=min(r,li);
        printf("%I64d\n", ab[r]-ab[l]);
        i=i+1;
    }
    return(0);
}
