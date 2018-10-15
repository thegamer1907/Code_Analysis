#include <iostream>

using namespace std;

int main()
{
    int m1=999999,mx=0,m2=999999,i,n,nr,v[101],i1,i2;
    cin>>n>>nr;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>mx)mx=v[i];
        if(v[i]<m1){m1=v[i];m2=m1;i2=i1;i1=i;}
        else if(v[i]<m2){m2=v[i];i2=i;}
    }
    mx=mx+nr;
    while(nr>0)
    {
        while(m1<=m2)
        {
            nr--;
            m1++;
            v[i1]++;
        }
        m1=999999;
        m2=999999;
        for(i=1;i<=n;i++)
        {
            if(v[i]<m1){m1=v[i];m2=m1;i1=i;}
            else if(v[i]<m2)m2=v[i];
        }
    }
    m1=0;
    for(i=1;i<=n;i++)
        if(v[i]>m1)m1=v[i];
    cout<<m1<<" "<<mx;
    return 0;
}
