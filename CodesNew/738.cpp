#include<iostream>
#include<map>
using namespace std;
int a,b,c,d,t;
string s;
string q[100006];
map<string,int> x;
int main ()
{
    cin>>a>>b;
    if(a>b)
    {
    cout<<"YES";
    return 0;
    }
    else
    if(b>a)
    {
    cout<<"NO";
    return 0;
    }
    else
    if(a==b)
    {
    for(int i=1;i<=a+b;i++)
    {
        cin>>s;
        q[i]=s;
        x[s]++;
    }
    for(int i=1;i<=a+b;i++)
    {
        if(x[q[i]]==2)
        {
            t++;
        }
    }
    }
    t=t/2;
    if(t==0)
    cout<<"NO";
    else
    if(t%2==1)
    cout<<"YES";
    else
    cout<<"NO";
}