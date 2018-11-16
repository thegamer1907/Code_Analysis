#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a[1000],b[1000],dem=0;
    
    cin>>n;
    
    for(long long i=0; i<n; i++) {cin>>a[i];}
    
    cin>>m;
    
    for(long long i=0; i<m; i++) {cin>>b[i];}
    sort(a,a+n);
    sort(b,b+m);
    for(long long i=0; i < n; i++){
        for(long long j=0; j < m; j++){
            if( abs (a[i] - b[j]) < 2){
                b[j]=999999;
                dem++;
                break;
            }
        }
    }
    cout<<dem<<endl;
    return 0;
}