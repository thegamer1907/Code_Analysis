#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int n,one=0,two=0;
    cin>>n;
    while(n--)
    {

        string ft;
        cin>>ft;
        if(st[0]==ft[1])
        {
            one++;
        }
        if(st[1]==ft[0])
        {
            two++;
        }
         if(st[0]==ft[0] && st[1]==ft[1])
        {
            two++;
            one++;
        }

    }
    if(one!=0 && two !=0)
    {
        cout<<"YES";
    }
    else cout<<"NO";

}
