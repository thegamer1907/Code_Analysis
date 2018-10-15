#include <bits/stdc++.h>
using namespace std;
const int N = 1000006 , MAX = 2e5+5  , OO = 1000000009;
int n , num , A[N] , mid , a , z;
int main(){
    scanf("%d" , &n);
    for(int i = 0; i < n; ++i) scanf("%d" , &A[i]);
    sort(A , A + n);
    mid = n / 2;
    while(mid < n && a < n / 2){
        if(A[a] * 2 <= A[mid])   ++num , ++mid , ++a;
        else                     ++mid;
    }
    printf("%d\n" , n - num);
}