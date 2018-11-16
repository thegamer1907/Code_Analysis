#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main(){
    int l,i,a,c1=0,d1=0,d2=0,c2=0;
    char s[100100];
    scanf("%s",&s);
    l=strlen(s);
    l=l-1;

    for(i=0; i<l; i++){
        if(s[i]=='A' && s[i+1]=='B'&&c1==0){
            c1++;
            i++;
        }
        else if(s[i]=='B' && s[i+1]=='A'&&c1>0){
            c2++;
            i++;
        }
    }
     for(i=0; i<l; i++){
        if(s[i]=='B' && s[i+1]=='A'&&d1==0){
            d1++;
            i++;
        }
        else if(s[i]=='A' && s[i+1]=='B'&&d1>0){
            d2++;
            i++;
        }
    }

    if(c1>0 && c2>0 || d1>0&&d2>0){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
