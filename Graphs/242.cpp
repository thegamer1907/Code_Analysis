#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    int n,t,i;
    char a[100];
    cin>>n>>t;
    cin>>a;
    while(t--)
    for(i=0;i<n;i++){
        if(a[i]=='B'&&a[i+1]=='G'){
            a[i]='G';
            i++;
            a[i]='B';
        }
    }
    cout<<a;
}
