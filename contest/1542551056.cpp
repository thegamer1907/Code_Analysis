#include <algorithm>
#include <cassert>
#include <cstdio>
#include <iostream>
using namespace std;


int main()
{
    int i,j,sum=0,h,m,s,h1,h2,maxx=-1,minn=-1,midle=-1,c[3],bol=0;
    scanf("%d%d%d%d%d",&h,&m,&s,&h1,&h2);
    if(h==12)
    h=0;
    if(h1==12)
    h1=0;
    if(h2==12)
    h2=0;


    h=h*5*6;
    h1=h1*5*6;
    m=m*6;
    h2=h2*5*6;
    s=s*6;
    if(s==h&&s==m)
    {
        cout<<"YES";
        return 0;
    }
    c[0]=h;
    c[1]=m;
    c[2]=s;
    for(i=0;i<3;i++)
    { sum=0;
        for(j=0;j<3;j++)
        {
            if(c[i]>c[j])
            {
                sum++;
            }

        }
        if(sum==2&&c[i]!=maxx)
        {
            maxx=c[i];
            bol++;
        }
        if(sum==1&&c[i]!=midle)
        {
            midle=c[i];
            bol++;
        }
        if(sum==0&&c[i]!=minn)
        {
            minn=c[i];
            bol++;
        }
    }
    if(m==h1&&h2!=0&&h1!=0&&(h==h2||h2<h||h1==30))
    {
         cout<<"NO";
        return 0;
    }
    if(h==h1&&h!=m&&(h2<maxx||m==0)&&h2>h1)
    {
        cout<<"NO";
        return 0;
    }
/*cout<<"\n min="<<minn<<"\n midle="<<midle<<"\nh1="<<h1<<"\nh2="<<h2<<"\nmax="<<maxx;*/
    if(midle==-1)
    {
        if(h1>=minn&&h1<=maxx&&h2>=minn&&h2<=maxx)
        {
            cout<<"YES";
            return 0;
        }

        else if(h1>=maxx&&h2>=maxx||h1<=minn&&h2<=minn)
        {
            cout<<"YES";
            return 0;
        }
        else if(h1>=maxx&&h2<=minn||h1<=minn&&h2>=maxx)
        {
            cout<<"YES";
            return 0;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    if(maxx==-1)
    {
        if(h1>minn&&h1<=midle&&h2>=minn&&h2<=midle)
        {
            cout<<"YES";
            return 0;
        }

        else if(h1>=midle&&h2>=midle||h1<=minn&&h2<=minn)
        {
            cout<<"YES";
            return 0;
        }
        else if(h1>=midle&&h2<=minn||h1<=minn&&h2>=midle)
        {
            cout<<"YES";
            return 0;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
     if(minn==h1&&midle==h2)
   {
       cout<<"NO";
       return 0;
   }
    else if(h1>=minn&&h1<=midle&&h2>minn&&h2<=midle)
    {
        cout<<"YES";
            return 0;
    }
   else if(h1>midle&&h1<=maxx&&h2>midle&&h2<=maxx)
   {
       cout<<"YES";
            return 0;
   }
   else if (h1>maxx&&h2>=maxx&&h!=h2||h1<=minn&&h2<=minn)
   {
       cout<<"YES";
            return 0;
   }

   else if (h1>=maxx&&h2<=minn||h1<=minn&&h2>maxx)
   {
       cout<<"YES";
            return 0;
   }


   else
   {
       cout<<"NO";
       return 0;
   }




}
