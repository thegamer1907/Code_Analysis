#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,x=0,y=0,z=0;

    cin>>n;
    int a,b,c;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        x+=a; y+=b; z+=c;
    }
    if(x==0 && y==0 && z==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
