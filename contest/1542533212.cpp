#include<bits/stdc++.h>

using namespace std;


int main()
{

    string s, p;
    int n,flag=0,flap=0;
    cin>>s>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        if(s==p)
            {cout<<"YES";
            return 0;}
        if(p[1]==s[0])
        {
            flag=1;

        }
         if(p[0]==s[1])
        {
            flap=1;

        }
        if(flag==1)
        {
            if(p[0]==s[1])
                flag=3;
        }
        if(flap==1)
        {
            if(p[1]==s[0])
                flap=3;
        }
    }
    if(flag==3 ||flap==3)
        {cout<<"YES";
        return 0;}
    else
    {cout<<"NO";
    return 0;}
}
