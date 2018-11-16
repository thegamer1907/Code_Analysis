#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,m,p = 1 ;
    bool v = false ;
    cin>>n>>t ;

    for(int i = 1 ;i <n ;i++)
    {
        cin>>m ;
        if(p == i)
        {
            p = i+m ;
        }
        if(p == t)
        {
            v = true ;
        }
    }
    if(v)
    {
        cout<<"YES" ;
    }else
    {
        cout<<"NO" ;
    }


}
