#include <bits/stdc++.h>
using namespace std;
const int N = 1000006 , MAX = 2e5+5  , OO = 1000000009;
int n , num , A[N] , mid , a , z;
int main(){
    scanf("%d" , &n);
    for(int i = 0; i < n; ++i) scanf("%d" , &A[i]);
    sort(A , A + n);
    for (int i = n / 2, j = 0; j < n / 2 && i < n;i++)
		if (A[j] * 2 <= A[i]) num++, j++;
    printf("%d\n" , n - num);
}