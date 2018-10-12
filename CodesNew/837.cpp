//
//  cf755B.cpp
//  
//
//  Created by keshav goyal on 14/01/18.
//
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,count=0;
    string str;
    map<string,int> map1,map2;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>str;
        map1[str]=1;
    }
    for(j=1;j<=m;j++)
    {
        cin>>str;
        if(map1[str]==1)
            count++;
        map2[str]=1;
    }
    n=n-count;
    m=m-count;
    if(count%2==0)
    {
        if(n>m)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
    {
        n++;
        if(n>m)
            cout<<"YES";
        else
            cout<<"NO";
    }
}

