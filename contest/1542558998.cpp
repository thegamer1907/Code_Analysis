#include <bits/stdc++.h>
using namespace std;
struct st
{
    int a[5];
};

int main()
{
    st ar[100005];

    int n,k,x;
    cin>>n>>k;
    int i,j,tm;
    map<int,int>  mp;
    for(i=0; i<n; i++)
    {
        tm = 0;
        for(j=0; j<k; j++)
        {
            scanf("%d",&x);
            tm=tm*10+x;
        }
        mp[tm]++;
        //cout<<tm<<endl;
    }
    int nn=0;
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        x=it->first;
        for(j=0; j<k; j++)
        {
            tm = x%10;
            ar[nn].a[k-j-1]=tm;
            x/=10;

        }
        nn++;
    }
   // cout<<endl;
    int l;

    for(i=0;i<nn;i++)
    {
        for(j=0;j<nn;j++)
        {
            int fl=1;
            for(l=0;l<k;l++)
            {
                tm = ar[i].a[l]+ar[j].a[l];
                if(tm==2)
                {
                    fl=0;
                }
            }

            if(fl)
            {
                puts("YES");
                return 0;
            }

        }
    }
    puts("NO");







}




