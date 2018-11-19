#include<iostream>
using namespace std;
string p;
int n,s,d;
string x;
int main()
{
    cin>>p>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x[0]==p[0]&&x[1]==p[1])
            s=d=1;
        if(x[1]==p[0])
            s=1;
        if(x[0]==p[1])
            d=1;
    }
    if(s&&d)
        cout<<"YES";
    else
        cout<<"NO";
}
