#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h,m,s;
    long double h1,m1,s1,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(t1==12)
        t1=0;
    if(t2==12)
        t2=0;
    h1=(h*30+m*0.5+(s*1.0)/120);
    if(h1>=360)
        h1-=360;
    m1=(m*6+s*0.1);
    if(m1>=360)
        m1-=360;
    s1=s*6;
    vector<long double> v(5);
    v[0]=h1;
    v[1]=m1;
    v[2]=s1;
    v[3]=(t1*30);
    v[4]=(t2*30);
    sort(v.begin(),v.end());
    int req=find(v.begin(),v.end(),t1*30)-v.begin();
    int req1=((req-1)%5+5)%5;
    int req2=(req+1)%5;

    if(v[req1]==t2*30||v[req2]==t2*30)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
