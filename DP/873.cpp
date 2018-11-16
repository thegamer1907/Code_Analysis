
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,g,r[1000],zero,one,diff;
    while(cin>>a)
    {

        for(b=1;b<=a;b++)
        {
            cin>>r[b];
        }
        if(a==1|| a==2)
        {
            if(a==1)
            {
                if(r[1]==0)
                {
                    cout<<"1"<<endl;
                }
                else
                {
                    cout<<"0"<<endl;
                }
            }
            else
            {

             if(r[1]==1&&r[2]==1)
             {
                 cout<<"1"<<endl;
             }
             else
             {
                 cout<<"2"<<endl;
             }
            }
            continue;
        }
        e=0;
        int flag=0;
        for(b=1;b<=a-1;b++)
        {
            zero=0;
            one=0;
            for(c=b;c<=a;c++)
            {
                if(r[c]==0)
                {
                    flag=1;
                    zero++;
                }
                else
                {
                    one++;
                }
                diff=zero-one;
                if(diff>e)
                {
                    e=diff;
                    f=b;
                    g=c;
                }

            }


        }
        for(int u=f;u<=g;u++)
        {

            if(r[u]==0)
            {
                r[u]=1;
            }
            else
            {
                r[u]=0;
            }
        }

        int cnt=0;
        for(int u=1;u<=a;u++)
        {
            if(r[u]==1)
            {
                cnt++;
            }
        }
        if(flag==1)
        {

        cout<<cnt<<endl;
        }
        else
        {
            cout<<a-1<<endl;
        }





    }









    return 0;
}
