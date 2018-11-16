#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,jud=0;
    cin>>a>>b;
    int s=1;
    a--;
    int p=1;
    int i,in[100000];
    for(i=0;i<a;i++)cin>>in[i];
    for(i=0;i<a;i++){
        s+=in[i];
        i+=in[i]-1;
        if(s==b)jud=1;
    }
    if(jud)cout<<"YES";
    else cout<<"NO";
}
