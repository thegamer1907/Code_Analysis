
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int b,x=0,y=0,m=0;
    cin>> b;
    for(int g=0;g<b;g++)
    {
        string f;
        cin>>f;
        if(f[1]==a[0])
        x++;
        if(f[0]==a[1])
        y++;
        if(f==a)
        m++;
    }
    if(m>0||(x>0&&y>0))
    cout<<"YES";
    else
    cout<<"NO";
}
