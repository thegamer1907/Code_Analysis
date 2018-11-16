#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    char a[1000];
    cin>>a;
    int i;
    int cnt=0;
    for(i=0;a[i]!='\0';i++){
        if(a[i]==a[i+1])cnt++;
        else cnt=0;
        if(cnt==6){
            printf("YES");
            break;
        }
    }
    if(a[i]=='\0')printf("NO");
}
