/**Race Against Time*/
/**Accepted*/
#include<bits/stdc++.h>
bool compare(float h,float m,float t1,float t2);
using namespace std;
int main()
{
    float h1,m1,s1,t1,t2;
    cin>>h1>>m1>>s1>>t1>>t2;
    float s=s1/5;
    float m=(m1+s1/60)/5;
    float h=h1+(m1+s1/60)/60;
    if(m==0)
        m=12;
    if(s==0)
        s=12;
    if(compare(h,m,t1,t2)&&compare(m,s,t1,t2)&&compare(s,h,t1,t2))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

bool compare(float h,float m,float t1,float t2)
{
    if(h==m||h==t1||h==t2||m==t1||m==t2)
        return true;
    if(h>m)
    {
        if(h>t1&&h>t2&&t1>m&&t2>m)
        {
            return true;
        }
        if(t1>h&&t2>h&&t1>m&&t2>m)
        {
            return true;
        }
        if(t1<h&&t2<h&&t1<m&&t2<m)
        {
            return true;
        }
        if(t1<h&&t2>h&&t1<m&&t2>m)
        {
            return true;
        }
        if(t1>h&&t2<h&&t1>m&&t2<m)
        {
            return true;
        }
    }
    if(h<m)
    {
        if(h<t1&&h<t2&&t1<m&&t2<m)
        {
            return true;
        }
        if(t1>h&&t2>h&&t1>m&&t2>m)
        {
            return true;
        }
        if(t1<h&&t2<h&&t1<m&&t2<m)
        {
            return true;
        }
        if(t1<h&&t2>h&&t1<m&&t2>m)
        {
            return true;
        }
        if(t1>h&&t2<h&&t1>m&&t2<m)
        {
            return true;
        }
    }
    return false;
}
