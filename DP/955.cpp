#include <iostream>
using namespace  std;
int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0;i<n;i++) {
        cin >>a[i];
        b[i] = a[i]==1 ? -1 : 1;
    }
    int ans=b[0], l=0, r=0, sum =0, pos =-1;
    for(int i=0; i<n;i++) {
        sum+=b[i];
        if(sum>ans) {
            ans = sum;
            l=pos+1;
            r=i;
        }
        if(sum<0) {
            sum =0;
            pos =i;
        }
    }
    sum=0;
    for(int i=l;i<=r;i++)     {
        a[i]=1-a[i];
    }
    for(int i=0;i<n;i++) {
        sum+=a[i];
    }
    cout << sum;
    return 0;
}
