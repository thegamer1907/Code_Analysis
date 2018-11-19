#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
h=h%12;


    t2=t2%12;
    t1=t1%12;
    int a1=t1,a2=0,a3=1;
 int d=0;
    while(!(a1==t1&&a2==0&&a3==0))
    {
        if(a1==h&&a2==m&&a3==s)
        {
            d=-1;
        //    cout<<a1<<" "<<a2<<" "<<a3<<" 1";
        }
        else if(a1==(m/5)&&a2==(m%5)*12&&a3==s)
        {
            d=-1;
    //cout<<a1<<" "<<a2<<" "<<a3<<" 1";

        }
        else if(a1==(s/5)&&a2==(s%5)*12&&a3==0)
        {
            d=-1;
    //cout<<a1<<" "<<a2<<" "<<a3<<" 1";

        }
        else if(a1==t2&&a2==0&&a3==0)
        {
           d==0;
            break;
        }
        else
        {
            a3+=1;
            if(a3==60)
            {
                a3=0;
                a2+=1;
                if(a2==60)
                {   a2=0;
                    a1+=1;
                    if(a1==12)
                    {
                        a1=0;
                    }
                }
            }
        }

        if(d==-1)
        {
            break;
        }

    }

   a1=t1-1;
   if(a1==-1)
   {
       a1=11;
   }
   a2=59;
   a3=59;
int d2=0;
//cout<<endl<<a1<<" "<<a2<<" "<<a3<<endl;
   while(!(a1==t1&&a2==0&&a3==0))
    {
        if(a1==h&&a2==m&&a3==s)
        {
            d2=-1;
    //cout<<a1<<" "<<a2<<" "<<a3<<" 2";

        }
        else if(a1==(m/5)&&a2==(m%5)*12&&a3==s)
        {
            d2=-1;
  //              cout<<a1<<" "<<a2<<" "<<a3<<" 2";

        }
        else if(a1==(s/5)&&a2==(s%5)*12&&a3==0)
        {
            d2=-1;
    //            cout<<a1<<" "<<a2<<" "<<a3<<" 2";

        }
        else if(a1==t2&&a2==0&&a3==0)
        {
            d2==0;
            break;
        }
        else
        {
            a3-=1;
            if(a3==-1)
            {
                a3=59;
                a2-=1;
                if(a2==-1)
                {   a2=59;
                    a1-=1;
                    if(a1==-1)
                    {
                        a1=11;
                    }
                }
            }
        }

        if(d2==-1)
        {
            break;
        }

    }

   if(d==-1&&d2==-1)
   {
       cout<<"No";
   }
   else
   {
       cout<<"Yes";
   }

}
