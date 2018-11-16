#include<bits/stdc++.h>
using namespace std;
int main(){

    int a=0,n,t,i,j,c=0;
    cin>>n>>t;
    int ar[n+10];
    for(i=1;i<n;i++){
       scanf("%d",&ar[i]);

    }
    for(i=1;i<n; ){
        c=i+ar[i];
        if(c==t){
            printf("YES\n");
            return 0;
        }

        i=c;

    }
    printf("NO\n");
    return 0;
}
