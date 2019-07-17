#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=1e5+5;
int main()
{
    int n;
    scanf("%d",&n);
    int a[maxn],x=1,ma=-1,y,fla=0,z;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1);
    for(int i=1; i<=n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            x++;
        }
        if(x>=ma)
        {
            ma=x;
        }

        if(a[i]!=a[i+1])
        {
            x=1;
        }
    }
    if(n==1&&a[n]==0)
    {
        cout<<"cslnb"<<endl;

    }
    else if(ma>=3||a[2]==0)
    {
        cout<<"cslnb"<<endl;

    }
    else
    {
        if(ma==2)
        {
            y=0;
            for(int i=n; i>=2; i--)
            {
                if(a[i]==a[i-1])
                {
                    if(a[i]-1!=a[i-2]||i==2)
                    {
                        fla++;
                        a[i]=a[i]-1;
                        y++;
                    }
                }
            }
            for(int i=1; i<n; i++)
            {
                if(a[i]==a[i+1])
                {
                    if((a[i]-1!=a[i-1]&&i>=2)||(i==1&&a[i]==a[i+1]))
                    {
                        fla++;
                        a[i]=a[i]-1;
                        y++;
                    }

                    else if(a[i]-1==a[i-1]&&i>=2&&y<=1)
                    {
                        cout<<"cslnb"<<endl;
                        return 0;
                    }
                }
            }if(y>=2)
            {
                cout<<"cslnb"<<endl;
                return 0;
            }

        }

        if(a[1]!=0)
        {
            fla+=a[1];
            a[1]=0;
        }

        while(1)

        {


            z=0;
            for(int i=1; i<=n-1; i++)
            {
                if(a[i]==a[i+1]-1)
                {
                    z++;
                }
            }


            if(z==n-1)
            {
                if(fla%2==1)
                {
                    cout<<"sjfnb"<<endl;
                }
                else if(fla%2==0||fla==0)
                {
                    cout<<"cslnb"<<endl;
                }
                return 0;
            }
            for(int i=n; i>=2; i--)
            {

                if(a[i]-1!=a[i-1]&&a[i]-1>=0)
                {
                    fla++;
                    a[i]=a[i]-1;
                    break;
                }


            }

        }
    }

    return 0;

}