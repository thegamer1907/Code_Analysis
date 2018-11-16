#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool flag=false;
    int n,t,po=1,x;
    cin>>n>>t;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(po==i+1)
            po=po+x;
        if(po==t)
            flag=true;
        else if(po>t)
            break;
    }

    puts(flag?"YES":"NO");

    return 0;
}