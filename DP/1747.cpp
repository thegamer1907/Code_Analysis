#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,f=0,f1=0,t=0,t1=0;
    char st[100000];
    cin>>st;
    n=strlen(st);
    if(n>=3)
    {
        for(i=0; i<n-1; i++)
        {
            if(st[i]=='A' && st[i+1]=='B' && f==0)
            {
                f=1;
                i+=2;
            }
            if(f==1)
            {
                if(st[i]=='B' && st[i+1]=='A')
                {
                    f1=1;
                }
            }
        }
        if(f!=1 || f1!=1)
        {
            t=0;
            t1=0;

            for(i=0; i<n-1; i++)
            {
                if(st[i]=='B' && st[i+1]=='A' && t==0)
                {
                    t=1;
                    i+=2;
                }
                if(t==1)
                {
                    if(st[i]=='A' && st[i+1]=='B')
                    {
                        t1=1;
                    }
                }
            }
            f=t;
            f1=t1;
        }
        if(f==1 && f1==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}