#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,g;
    char ch;
    int r1[200],r2[200];
    while(cin>>a)
    {
        for(b=1;b<=a;b++)
        {
            cin>>r1[b];
        }
        if(a>1)
        {
            for(b=1;b<=a-1;b++)
            {
                int u=b;

                for(int i=b+1;i<=a;i++)
                {
                    if(r1[i]<r1[u])
                    {
                        u=i;
                    }
                }
                swap(r1[b],r1[u]);

            }
        }
        cin>>c;
        for(b=1;b<=c;b++)
        {
            cin>>r2[b];
        }
         if(c>1)
        {
            for(b=1;b<=c-1;b++)
            {
                int u=b;

                for(int i=b+1;i<=c;i++)
                {
                    if(r2[i]<r2[u])
                    {
                        u=i;
                    }
                }
                swap(r2[b],r2[u]);

            }
        }
        e=0;
        for(b=1;b<=a;b++)
        {
            for(d=1;d<=c;d++)
            {
                if(r1[b]==r2[d])
                {
                    r2[d]=-9;
                    e++;
                    break;
                }
                else if(r1[b]==r2[d]+1)
                {
                    r2[d]=-9;
                    e++;
                    break;
                }
                else if(r1[b]==r2[d]-1)
                {
                    r2[d]=-9;
                    e++;
                    break;
                }
            }


        }
        cout<<e<<endl;




    }









    return 0;
}
