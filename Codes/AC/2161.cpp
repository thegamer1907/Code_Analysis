
#include <cstdio>
#include <iostream>
using namespace std;
int a[200001];
int main(int argc, const char * argv[]) {
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int l = 0;
    int r = n-1;
    long long sumL = a[0];
    long long sumR = a[n-1];
    long long ans = 0;
    while(l<r){
        if(sumL < sumR){
            l++;
            sumL += a[l];
        }else if(sumL > sumR){
            r--;
            sumR += a[r];
        }else{
            if(ans < sumL) ans = sumL;
            l++;
            sumL += a[l];
        }
    }
    if(sumL == sumR && ans<sumL && l<r) ans = sumL;
    
    cout << ans;
    
    
    return 0;
}
