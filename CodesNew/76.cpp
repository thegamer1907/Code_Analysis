#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int maxVal = max(a[0],l - a[n-1]) * 2;
    for(int i = 0 ; i < n-1 ; i++){
        maxVal=max(maxVal,abs(a[i]-a[i+1]));
    }
    double d = maxVal/2.000000000000000;
    cout<<fixed<<setprecision(20)<<d<<endl;

    return 0;
}
// 1538748678336
