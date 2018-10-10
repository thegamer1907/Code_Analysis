#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    scanf("%d %d",&n,&l);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    if(n==1){
        if(l-arr[0]>=arr[0]) printf("%d.0000000000",l-arr[0]);
        else printf("%d.0000000000",arr[0]);
        return 0;
    }
    sort(arr,arr+n);
    int distance[n-1];
    for(int i=0;i<n-1;i++) distance[i]=arr[i+1]-arr[i];
    double y=*max_element(distance,distance+n-1);
    double x=0;
    if(arr[0]!=0||arr[n-1]!=l){
        if(arr[0]!=0) x=arr[0];
        if(arr[n-1]!=l) 
            if(x<l-arr[n-1]) x=l-arr[n-1];
    }
    if((y/2)>x) printf("%.10lf",y/2);
    else printf("%.10lf",x);
    return 0;
}