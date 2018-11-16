#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int a[100];
    int n,i,k;
    cin>>n>>k;
    for(i=0;i<n;i++)cin>>a[i];
    int cnt=0;
    for(i=0;i<n;i++)if(a[i]>=a[k-1]&&a[i]>0)cnt++;
    cout<<cnt;
}

