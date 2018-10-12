#include<bits/stdc++.h>
using namespace std;

long long int solve(long long int n ,long long int mid){
    long long int vasya = 0;
    while(n>0){
        long long int x = min(mid,n);
        vasya += x;
        n-=x;
        //int y = n/10;
        n-=(n/10);
    }
    return vasya;
}

int main(){
    long long int n;
    scanf("%I64d",&n);
    long long int l = 1, r = n/2+1;
    long long int res = 0;
    while(l<=r){
        long long int mid = l + (r-l)/2;
        long long int ans = solve(n,mid);
        if(ans >= (n+1)/2){
            res = mid;
            r = mid-1;
        }else{
            l = mid + 1;
        }
    }
    //cout<<res<<endl;
    printf("%I64d",res);
    return 0;
}