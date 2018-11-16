#include<bits/stdc++.h>
#include <map>
#include <set>
#include <math.h>
using namespace std;
int main()
{
    long int n , i , t , x = 0 ; 
    cin>>n>>t;
    long int a[n] ;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i = 0 ; 
    t-- ; 
    if(t==i)
        {
            cout<<"YES";
            return 0 ; 
        }
    while(i<t)
    {
        i+= a[i] ;
        if(t==i)
        {
            cout<<"YES";
            return 0 ; 
        }
    }
    cout<<"NO";
    return 0 ;
}