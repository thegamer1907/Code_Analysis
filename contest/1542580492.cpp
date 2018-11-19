#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
    string s,a;
    int n;
    cin>>s;
    cin>>n;
    int c1=0,c2=0,p=0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(s[0]==a[0]&&s[1]==a[1])
        {
            p=1;
        }
        if(s[0]==a[1])
        {
            c1=1;
        }
        if(s[1]==a[0])
        {
            c2=1;
        }
    }
    if(c1==1&&c2==1||p==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
