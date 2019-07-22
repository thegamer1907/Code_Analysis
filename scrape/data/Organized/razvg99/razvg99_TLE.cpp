#include<bits/stdc++.h>
using namespace std;
int n,k,p,a[100001],prv,pg,i,nr,ok,sol,M,o,s[100001];
int main()
{
    cin>>n>>k>>p;
    for(i=1;i<=k;i++)
        cin>>a[i];
    sort(a+1,a+k+1);

    while(ok<k)
    {
    prv=-1;
    M=1;
    nr=1;
   for(i=1;i<=k;i++)
   {
       pg=a[i]/p;
       if(a[i]%p==0)
        pg--;
        if(pg==prv)
            nr++;
        else
            nr=1,prv=pg;
        if(nr>M)
            M=nr,o=pg;
       s[i]=pg;
   }
   for(i=1;i<=k;i++)
    {
        if(s[i]==o&&a[i]!=-1)
    ok++,a[i]=-1;
    else
        if(a[i]!=-1)
       a[i]-=M;
    }
      sol++;
    }
    cout<<sol;
    return 0;
}