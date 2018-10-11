/*
 Author  : Mohamed Sameh
*/
#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    map<string,int>mp;
    string x , y ;
    int c =0 ,n,m;
    cin >> n >> m ;
    for (int i =0 ; i < n ;i ++)
    {
        cin >> x ;
        mp[x]=1;
    }
    for (int i =0 ; i < m ;i++)
    {
        cin >> x ;
        if (mp[x])
            c++;
    }
if (c % 2 == 0 )
{
    cout << (n>m?"YES":"NO");
}
else
{
m--;
cout << (n>m?"YES":"NO");
}
return 0 ;
}
