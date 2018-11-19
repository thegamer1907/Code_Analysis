#include <bits/stdc++.h>
//#include <iostream>
//#include <cstdio>
//#include <algorithm>

using namespace std;

int main()
{
    int t[3],t1,t2,tt1 = 0,tt2 = 0;
    cin>>t[0]>>t[1]>>t[2]>>t1>>t2;
    t[0] *= 300;
    t[0] += t[1];
    t[1] *= 60;
    t[1] += t[2];
    t[2] *= 60;
    sort(t,t+3);
    t1 *= 300;
    t2 *= 300;
    for(int i=0;i<3;i++){
        if(t1>t[i]) tt1 = i+1;
        if(t2>t[i]) tt2 = i+1;
    }
    if(tt1==tt2||(tt1==3&&tt2==0)||(tt1==0&&tt2==3)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
