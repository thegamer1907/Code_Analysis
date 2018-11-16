#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    a=a-1,b=b-1;
    int ans = 0;
    while(a!=b)
    {
        a=a/2;
        b=b/2;
        ans+=1;
        if(a==b)
        {
            if(n==2)
                cout<<"Final!"<<endl;
            else
                cout<<ans<<endl;
        }
        n=n/2;
    }
}