#include<iostream>
#include<stdio.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int m,j=1,cnt;
long long n,k,p[100000+5];
int main(){
    cin>>n>>m>>k;
    for(int i = 1;i<=m;i++){
        scanf("%d",&p[i]);
    }
    sort(p+1,p+m+1);
    while(j<=m){
       int kk = (p[j]-(j-1)-1)/k;
       int mm = 0;
       for(;j+mm<=m;){
        if((p[j+mm]-(j-1)-1)/k==kk){
            mm++;
        }
        else break;
       }
       j+=mm;
       cnt++;
    }
    cout<<cnt;
    return 0;
}