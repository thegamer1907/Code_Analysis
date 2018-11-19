#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n , t1 = 0 , t2 = 0 , t5 = 1  ;
    string a, x;
    cin>>a;
    cin>>n;
    for( ll i = 0 ; i < n ; i ++ ){
        cin>>x;
        if(a==x) {t5=0;}
        if( x[x.size()-1]==a[0]) t1=1;
        if( x[0] == a[1]) t2=1;
    }
    if(t1+t2==2 || t5==0) cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
