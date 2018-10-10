#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdio.h>
using namespace std;

int main() {
    long long n,len;
    cin>>n>>len;
    long long a[1000];
    long long mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n;i++){
        long long def=a[i]-a[i-1];
        mx=max(mx,def);
    }
    double d=mx/2.0;
    long long f=a[0]-0;
    long long l=len-a[n-1];
    mx=max(f,l);
    if(mx>0)
        if(mx>d)d=mx;
    printf("%.10f",d);
    return 0;
}