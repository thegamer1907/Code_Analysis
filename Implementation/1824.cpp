#include<iostream>
using namespace std;
int a,b,c,i,n,x,y,z;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0 && y==0 && z==0)
        cout<<"YES";
    else
        cout<<"NO";
}
