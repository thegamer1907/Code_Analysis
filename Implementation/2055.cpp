#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0,y=0,z=0,tmp;

    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        x+=tmp;
        cin>>tmp;
        y+=tmp;
        cin>>tmp;
        z+=tmp;
    }

    if(x==0 && y==0 && z==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
