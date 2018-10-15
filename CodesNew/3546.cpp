#include <iostream>
#include <math.h>
using namespace std;
int n,m;
int a[109];
int main (){
    cin>>n>>m;
    int M = m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx = 0;
    for(int i=0;i<n;i++){
        mx = max(mx,a[i]);
    }
    for(int i=0;i<n;i++){
        m -= (mx - a[i]);
        if(m <= 0){
            cout<<mx<<" "<<M+mx<<endl;
            return 0;
        }
    }
    cout<<ceil((long double)m/n) + mx<<" "<<M + mx<<endl;
}
