#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    string s,ss1,ss2;
    int a,i,z=0,x=0,c=0;
    cin>>s;
    cin>>a;
    string s1[a],s2[a],s3[a];
    for(i=0; i<a; i++)
    {
        cin>>s1[i];
        if(s1[i]==s) z=z+1;
        s2[i]=s1[i].substr(0,1);
        s3[i]=s1[i].substr(1,1);
    }

    ss1=s.substr(0,1);
    ss2=s.substr(1,1);

    for(i=0; i<a; i++)
    {
        if(s2[i]==ss2) x=x+1;
        if(s3[i]==ss1) c=c+1;
    }

    if((z>0)||(x>0&&c>0))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

