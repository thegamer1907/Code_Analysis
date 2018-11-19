#include<bits/stdc++.h>
using namespace std;
map<char,int> m1,m2;
int main()
{
    int a,b,c,t1,t2;
    cin>>a>>b>>c>>t1>>t2;
    if(t1>t2)
        swap(t1,t2);
    if(b==0) b=60;
    if(c==0) c=60;
    if(a>=t1&&a<t2)
    {
        if(b>=5*t1&&b<5*t2&&c>5*t1&&c<5*t2)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        if((b>=5*t2||b<5*t1)&&(c>5*t2||c<5*t1))
        cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }
}
