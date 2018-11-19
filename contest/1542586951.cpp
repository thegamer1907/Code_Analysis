#include<iostream>
using namespace std;
int main()
{
    char c1,c2,u,v;
    int n;
    bool a=0,b=0,ans=0;
    cin>>c1>>c2>>n;
    while(n--)
    {
        cin>>u>>v;
        if(u==c1&&v==c2)
            ans=1;
        else if(u==c2&&v==c1)
            ans=1;
        else if(v==c1)
            a=1;
        else if(u==c2)
            b=1;
    }
    if(a==1&&b==1)
        ans=true;
    if(ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
