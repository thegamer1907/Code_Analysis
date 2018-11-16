#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,a,b,c,s1=0,s2=0,s3=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        s1+=a;
        s2+=b;
        s3+=c;
    }
    if(s1==0 && s2==0 && s3==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
