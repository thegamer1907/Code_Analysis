#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,s=0,s1=0,s2=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        s+=a;
        s1+=b;
        s2+=c;
    }
    if(s==0 &&s1==0 &&s2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
