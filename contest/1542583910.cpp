#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,i;
    bool omg=false;
    string x,y,z;
    bool one=false,two=false,three=false,four=false,one1=false,two2=false,three3=false,four4=false;
    //map<char,int>seen;
    //vector<string>one;
    //vector<string>two;
    cin>>x;
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>y;
        if((y[0]==x[0] && y[1]==x[1])||(y[1]==x[0] && y[0]==x[1]))omg=true;
        if(y[0]==x[1])one=true;
        if(y[1]==x[0])four=true;
        if(y[0]==x[1])one1=true;
        if(y[1]==x[0])four4=true;

        //if(y[1]==)
    }
    if((one==true && four==true)|| (one1==true && four4==true)|| (omg==true))cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

