#include <iostream>

using namespace std;

int main()
{
int n,t,a[30000],i;
cin>>n>>t;
for(i=0;i<n-1;i++)
{
    cin>>a[i];
}
i=0;
while(i<=t-1){
    if(i==t-1) {cout<<"YES"; return 0;}
    i+=a[i];
}
cout<<"NO";
    return 0;
}
