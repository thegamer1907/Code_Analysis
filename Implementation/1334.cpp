#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;

int main(){

    int i,j,n,t;
    cin>>n>>t;
    char str[n];
    cin>>str;
    for(i=0;i<t;i++){
        for(j=0;j<n-1;j++){
            if(str[j]=='B' && str[j+1]=='G'){
                swap(str[j],str[j+1]);
                j++;
            }
        }
    }
    cout<<str;
    return 0;
}
