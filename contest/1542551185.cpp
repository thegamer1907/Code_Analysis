#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a,b,c,t1,t2,Max,Min,cnt=0;
    bool f1=true,f2=true,f3=true;
    cin>>a>>b>>c>>t1>>t2;
    Max=max(t1,t2);
    Min=min(t1,t2);
    double h,m,s;
    if(b==0 && c==0)
        h=a;
    else
        h=1.0*a+0.1;
    m=b*1.0/5;
    s=c*1.0/5;

    for(int i=Min; i<Max+1; i++)
    {
        if(i==Min)
        {
            if(i>h )
                f1=false;
            if(i>m )
                f2=false;
            if(i>s )
                f3=false;
        }

        if(i>h && f1)
        {
            cnt++;
            f1=false;
        }
        if(i>m && f2)
        {
            cnt++;
            f2=false;
        }
        if(i>s && f3)
        {
            cnt++;
            f3=false;
        }
    }
    if(cnt==0 || cnt==3)
        cout<<"YES";
    else
        cout<<"NO";
    //system("pause");
    return 0;
}
