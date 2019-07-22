#include<bits/stdc++.h>
    using namespace std;
    unsigned long long n,k,p,a[1000001],prv,pg,i,nr,s,d;
    int main()
    {
        cin>>n>>k>>p;
        for(i=1;i<=k;i++)
            cin>>a[i];
        sort(a+1,a+k+1);
        pg=a[1]/p;
        if(a[1]%p==0)
            pg--;
        prv=pg;
        i=2;
        s=1;
        d=0;
        nr=1;
        int ok=1;
        while(i<=k)
        {
            a[i]-=d;
            pg=a[i]/p;
            if(a[i]%p==0)
            pg--;
            if(pg==prv)
            s++;
            else
            {
               nr++;
                pg=(a[i]-s)/p;
            if((a[i]-s)%p==0)
            pg--;
            prv=pg;
            d+=s; 
               s=1;
           
            }
           
            i++;
        }
        cout<<nr;
        return 0;
    }