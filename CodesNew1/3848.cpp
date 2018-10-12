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
    printf("%I64d" , max(mx , (sum / (n-1)) + (sum % (n  - 1) != 0 ) ) );
}
