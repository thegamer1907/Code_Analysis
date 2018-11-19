#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long clock[3];
    for(int i=0;i<3;i++)
        cin>> clock[i];
    clock[0]*=50000;
    clock[1]*=100;
    long long t1,t2;
    cin >> t1 >> t2;
    if(t1>t2 )
    {
        long long zhan=t1;
        t1=t2;
        t2=zhan;
    }
    t1*=50000;
    t2*=50000;
    int flag1,flag2;
    flag1=flag2=0;
    clock[1]+=clock[2];
    clock[0]+=clock[1];
    int u=1;
    for(int i=0;i<3;i++)
    {
        clock[i]*=u;
        u*=100;
    //    cout << clock[i]<<t1<<t2<<endl;
        if(clock[i]>t2 || clock[i]<t1 )
            flag1=1;
        if(clock[i]>t1 && clock[i]<t2)
            flag2=1;
    }
    if(flag1==1 && flag2==1)
        cout << "NO"<<endl;
    else
        cout <<"YES"<<endl;
    return 0;
}
