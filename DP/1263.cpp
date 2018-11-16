#include <iostream>

using namespace std;

int main(){
    int n ;
    cin>>n ;
    int a[n] ;
    int sum=0 ;
    for (int i=0 ; i<n ; i++) {
        cin>>a[i] ;
        if (a[i]==1) {
            sum++ ;
        }
    }
    if (sum==n) {cout<<n-1 ; return 0 ;}
    int temp=0 ;
    for (int i=1 ; i<=n ; i++)  {
        for (int j=0 ; j<=n-i ; j++) {
            int zeros=0 ;
            int ones=0 ;
            for (int k=0 ; k<i ; k++) {
                if (a[j+k]==0) zeros++ ;
                if (a[j+k]==1) ones++ ;
            }
            if (zeros-ones>temp) temp=zeros-ones ;
        }
    }
    cout<<sum+temp ;


    return 0;
}