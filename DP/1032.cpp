#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    long long i,n,j,temp,temp2,MAX=0,curr=0,MIN,MAXP,MINP,x=1,a,b,c,d,start=0;
    string s;
    cin>>n;
    int one=0,zero=0;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==1){one++;if(start==1)curr--;}
        else {zero++;start=1;if(start==1)curr++;}
        MAX=max(curr,MAX);
        if (curr<0){curr=0;start=0;}
    }
    if(zero==0){MAX=-1;}
    cout<<MAX+one;
}


