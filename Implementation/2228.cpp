 #include<stdio.h>
 #include<iostream>
 #include<algorithm>
#include<string.h>
 using namespace std;

 int main()
 {
    int n,k,w;
    while(cin>>k>>n>>w)
    {
       int ans=w*(w+1)/2*k-n;
        if(ans<=0)
            printf("0\n");
        else
            printf("%d\n",ans);
    }
     return 0;
 }
