#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string moban;
    cin >> moban;
    int N;
    cin >> N;
    int flag1,flag2,flag3;
    flag1=flag2=flag3=0;
    while(N--)
    {
        string now;
        cin >> now;
        if(now==moban)
            flag1=1;
        if(now[1]==moban[0])
            flag2=1;
        if(now[0]==moban[1])
            flag3=1;
    }
    if(flag1==1 ||(flag2==1 && flag3==1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
