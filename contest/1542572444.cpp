#include <bits/stdc++.h>
using namespace std;

struct st
{
    int  a[5];

    int sum;
};
bool cm(st a, st b)
{
    return a.sum<b.sum;
}

st x[100005];
int main()
{

    int n,k;
    cin>>n>>k;
    int i,j,tm;
    for(i=0; i<n; i++)
    {
        tm = 0;
        for(j=0; j<k; j++)
        {
            scanf("%d",&x[i].a[j]);
            tm+=x[i].a[j];
        }
        x[i].sum=tm;
    }
    x[i].sum=9;
    sort(x,x+n,cm);
    int xsum = x[0].sum;
    if(xsum==0)
    {
        puts("YES");
        return 0;
    }
    int fl;
    int fi=0;

    while(x[fi].sum==xsum && fi<2)
    {

        for(i=0; i<n; i++)
        {

            fl=1;
            int sm;
            for(j=0; j<k; j++)
            {
                sm  = x[fi].a[j]+x[i].a[j];
                //cout<<sm<<endl;
                if(sm==2)
                    fl = 0;
            }
            if(fl)
            {
                puts("YES");
                return 0;
            }

        }
        fi++;
    }
    puts("NO");
    return 0;
}



