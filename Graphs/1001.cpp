#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    int arr[n]={};
    for(int i=1;i<n;i++) scanf("%d",&arr[i]);
    int i=1;
    while(i<=n){
        if(i+arr[i]==t){
            printf("YES"); return 0;
        }
        i=i+arr[i];
    }
    printf("NO");
    return 0;
}