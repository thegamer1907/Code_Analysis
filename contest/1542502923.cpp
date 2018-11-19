#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    char a[2];
    cin>>a[0]>>a[1];
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int t=0;
    for(int i=0;i<n;i++)
    {
        if(s[i][0]==a[0] && s[i][1]==a[1])
        {t=1;break;}
    }
    int p=0,q=0;
    for(int i=0;i<n;i++)
    {
        if(s[i][1]==a[0])
            p=1;
        if(s[i][0]==a[1])
            q=1;
        if(p==1 && q==1)
        {
            t=1; break;
        }
    }
    if(t==1)
        cout<<"YES";
    else
        cout<<"NO";
        return 0;
}
