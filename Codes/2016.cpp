#include<bits/stdc++.h>
using namespace std;
map<long long,long long> mpl;
map<long long,long long> mpr;
long long n, k, A[200005];
long long s;
int main(){
    ios::sync_with_stdio(false);
    cin >> n >> k;
    if(n<3){
        printf("0");
        return(0);
    }
    for(int i=0;i<n;i++){
        cin >> A[i];
        mpl[A[i]]++;
    }
    mpl[A[n-1]]--;
    mpr[A[n-1]]++;
    for(int i=n-2;i>=0;i--){
        mpl[A[i]]--;
        if(A[i]%k==0) s+=mpl[A[i]/k]*mpr[A[i]*k];
        mpr[A[i]]++;
    }
    cout << s;
}
