#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll h,m,s,t1,t2,cnt=0,flag=0;
    ll a[13];

    cin>>h>>m>>s>>t1>>t2;

    m/=5;
    if(m==0)m=12;

    s/=5;
    if(s==0)s=12;

//    cout<<h<<" "<<m<<" "<<s<<endl;

    a[h]=1;
    a[m]=1;
    a[s]=1;

    if(t1>t2)
    {
        ll temp;

        temp=t1;
        t1=t2;
        t2=temp;
    }

    for(ll i=t1;i<t2;i++)
    {
//        cout<<"1 "<<i<<endl;

        if(a[i]==1)
        {
            flag=1;
//            cout<<i<<endl;
            break;
        }
    }

    for(ll i=t2; ;i++)
    {
        if(i>12)
        i=i%12;
        if(i==0)i=12;

        if(i==t1)break;

//       cout<<"2 "<<i<<endl;

        if(a[i]==1)
        {
            cnt=1;
//            cout<<i<<endl;
            break;
        }



    }

    if(cnt==0 || flag==0)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;



}
