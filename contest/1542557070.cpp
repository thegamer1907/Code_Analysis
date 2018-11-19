#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
 {
    string s;
    cin>>s;
    int n;
    cin>>n;
    string me[n];
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        cin>>me[i];
        if(me[i]==s)
            flag=1;
    }
    int j,flag1=0,flag2=0;
    for(i=0;i<n;i++)
    {
       
        if(me[i][1]==s[0])
            flag1=1;
        if(me[i][0]==s[1])
            flag2=1;
        
    }
    if(flag1+flag2==2 || flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
