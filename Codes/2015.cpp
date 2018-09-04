#include<bits/stdc++.h>
using namespace std;
map<long long,long long> mpl;
map<long long,long long> mpr;
long long n, k, A[200005];
long long s;
int main(){
    scanf("%I64d %I64d", &n, &k);
    if(n<3){
        printf("0");
        return(0);
    }
    for(long long i=0;i<n;i++){
        scanf("%I64d", &A[i]);
        mpl[A[i]]++;
    }
    mpl[A[n-1]]--;
    mpr[A[n-1]]++;
    for(long long i=n-2;i>=0;i--){
        mpl[A[i]]--;
        if(A[i]%k==0) s+=mpl[A[i]/k]*mpr[A[i]*k];
        mpr[A[i]]++;
    }
    printf("%I64d", s);
}
