#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool f=0;
    int a[60]={0};
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    memset(a,0,sizeof a);
    h%=12;
    h*=5;
    a[s]=1;
    if(s)
        m+=1,m%=60,!(m%5)?m--:0;
    if(m||s)
        h+=1,h%=60,!(h%5)?h--:0;
    m+=60,m%=60;
    h+=60,h%=60;
    a[m]=1;
    a[h]=1;
    t1%=12;
    t1*=5;
    t2%=12;
    t2*=5;
    //cout<<h<<" "<<m<<" "<<s<<endl<<t1<<" "<<t2<<endl;
    for(int i=t1+1;1;i++)
    {
        i%=60;
        if(i==t2)
        {
            f=1;
            break;
        }
        if(a[i])
            break;
    }
    for(int i=t1-1;1;i--)
    {
        i+=60;
        i%=60;
        if(i==t2)
        {
            f=1;
            break;
        }
        if(a[i])
            break;
    }
    if(f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
