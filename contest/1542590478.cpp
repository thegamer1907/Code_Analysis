#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(void)
{
    string a,b;
    cin>>a;
    int n;
    cin>>n;
    int ff=0,xian=0,hou=0,re=0;
    for(int i=0;i<n;i++)
    {
        string t;
        cin>>t;
        if(t==a) ff = 1;
        if(t[0]==a[1]) hou++;
        if(t[1]==a[0]) xian++;
    }
    if(ff||(xian&&hou))
    {
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;
    return 0;
}