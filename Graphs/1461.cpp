/*BISMILLAHI TAWAKKALTU ALALLAH*/
/*There is no god without ALLAH
and Hazrat Muhammad Sallallahu Alihi Oasallam is The Messenger of ALLAH*/
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;


int main()
{
    int b,c,d,e,f,g,h,i,j,k=0,l=0,m,n,x,y;

    scanf("%d %d",&n,&m);

    int a[n];

    for(i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }

    for(i=0,j=1;i<n-1;i++,j++){
        b=a[i]+j;
        j=b-1;
        i=b-2;
        if(b==m){
            k=1;
            break;
        }
    }

    if(m==1||k==1)
        printf("YES\n");
    else if(k==0)
        printf("NO\n");

    return 0;
}


