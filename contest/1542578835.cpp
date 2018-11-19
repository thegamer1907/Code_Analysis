#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int m,h,s,t1,t2,m1,s1,f=0,tl,th;
    cin>>h>>m>>s>>t1>>t2;
    tl = min(t1,t2);
    th = max(t1,t2);

    if(s==0)
    {
        if(m==0)
        {
            m1=12,s1=12;
            if((t1>h && t1<12)&&(t2>h && t2<12))
                f=1;
            else if(t1<h && t2<h)
                f=1;
        }
        else
        {
            if(m%5==0)
            {
                m1 = m/5 ,s1=12;
                if(((m1>tl&&m1<th) && (h>=tl&&h<th) && (s1>tl&&s1<th))||((m1<tl||m1>th) && (h<tl||h>=th) && (s1<tl||s1>th)))
                    f=1;
            }
            else
            {
               m1 = m/5 ,s1=12;
                if(((m1>=tl&&m1<th) && (h>=tl&&h<th) && (s1>tl&&s1<th))||((m1<tl||m1>=th) && (h<tl||h>=th) && (s1<tl||s1>th)))
                    f=1;
            }
        }

    }
    else
    {
        if(s%5==0)
        {
         m1 = m/5 ,s1=s/5;
                if(((m1>=tl&&m1<th) && (h>=tl&&h<th) && (s1>tl&&s1<th))||((m1<tl||m1>=th) && (h<tl||h>=th) && (s1<tl||s1>th)))
                    f=1;
        }
        else
        {
            m1 = m/5 ,s1=s/5;
                if(((m1>=tl&&m1<th) && (h>=tl&&h<th) && (s1>=tl&&s1<th))||((m1<tl||m1>=th) && (h<tl||h>=th) && (s1<tl||s1>=th)))
                    f=1;
        }
    }
    if(f==1)
        cout<<"YES";
    else
        cout<<"NO";
}

