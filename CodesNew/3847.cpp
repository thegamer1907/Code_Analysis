#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n , x , sum = 0 , mx = 0;
    scanf("%I64d" , &n);

    for(int i = 0 ; i < n ; i++){
        scanf("%I64d" , &x) ;
        sum += x;
        mx = max(mx , x);
    }

    long long l = mx , r = INT_MAX , mid;
    while(l < r){
        mid = l + (r - l) / 2;
        if(mid <= (n * 1LL * mid) - sum)
            r = mid;
        else
            l = mid + 1;
    }
    printf("%I64d" , l);
}