#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    int n,i,count1=0,count0=0,count=0,mark=0;
    char x[110];
    scanf("%s",x);
    for(i=0;x[i]!='\0';i++){
        if(x[i]=='1'){
            count1++;
            mark=1;
            count0=0;
        }
        else{
            count0++;
            mark=0;
            count1=0;
        }
        if(count1>count&&mark==1){
            count=count1;
        }
        else if(count0>count&&mark==0){
            count=count0;
        }
    }
    if(count>=7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

