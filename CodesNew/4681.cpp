#include<bits/stdc++.h>

using namespace std;

const int N=5e5+5;
int arr[N];

int cInt(){
    int a;
    scanf("%d",&a);
    return a;
}

int main(){
    int n=cInt();
    for(int i=0;i<n;i++) arr[i]=cInt();
    sort( arr , arr+n );
    int l=(n-1)/2;
    int h=n-1;
    int cnt=0;
    while( l>=0&& h>=0 ){
        if( arr[h] >= arr[l]*2 ){
            ++cnt;
            --h;
        }
        --l;
    }
    int ans=n-min(n/2 , cnt );
    //int ans= n - cnt;
    printf("%d",ans);
}