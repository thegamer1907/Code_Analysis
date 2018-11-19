#include<bits/stdc++.h>
using namespace std;
int ar[65];
int main()
{
    memset(ar,0,sizeof(ar));
    int h,m,s,p,t,i;
    cin>>h>>m>>s>>p>>t;
    ar[s]=1;

    h=(h%12);
    h=h*5;
    h=h;
    if(m>0 || s>0)
    {
        h++;
    }
    ar[h]=1;
    if(s>0 && (m+1)%5!=0)
    {
        m++;
    }
    ar[m]=1;
   // cout<<m<<" "<<h<<endl;
    p=(p*5)%60;
    t=(t*5)%60;
    for(i=p;;i++)
    {
        i=i%60;

        if(ar[i]==1)
        {
//cout<<i<<endl;
            break;

        }
        if(i==t)
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }
    for(i=p;;i--)
    {
        if(i==-1)
        {
            i=59;
        }
        if(ar[i]==1)
        {
                       //cout<<i<<"   aa"<<endl;
            break;

        }
        if(i==t)
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;

}
