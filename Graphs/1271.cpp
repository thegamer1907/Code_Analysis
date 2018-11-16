#include <iostream>

using namespace std;

int n,t,a;
int l[40000]={0};
bool flag;

int main()
{
    cin>>n>>t;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        l[i]=i+a;
    }
    int i=1;
    flag=false;
    while(true)
    {
        i=l[i];
        if(i==t)
        {
            flag=true;
            break;
        }
        if(i==n)
        {
            break;
        }
    }
    if(flag){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}
