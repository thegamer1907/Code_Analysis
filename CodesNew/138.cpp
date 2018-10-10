#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    long long int a,b,i,p,j,c=0;
    double r;
    cin>>a>>b;
    long long int ara[a];
    for(i=0; i<a; i++){
        cin>>ara[i];
    }
    for(i=0; i<a; i++){
        for(j=i; j<a; j++){
            if(ara[i]>ara[j]){
                p=ara[i];
                ara[i]=ara[j];
                ara[j]=p;
            }
        }
    }
    for(i=0; i<a-1; i++){
        if(ara[i+1]-ara[i]>c){
            c = ara[i+1]-ara[i];
        }
    }
    r=(double)c/2;
    if((double)ara[0]>r){
        r=(double)ara[0];
    }
    if((double)(b-ara[a-1])>r){
        r=(double)(b-ara[a-1]);
    }
   printf("%.10f",r);
    return 0;
}

