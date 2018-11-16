#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n ;
    cin >> x;
    x-=1;
    int q[n];
    for ( int i = 0 ;  i<n-1 ; i++){
        int w;cin>>w;q[i]=w;
    }
    int current = 0;
    bool check = true;
    while (check){
        current += q [current];
        if ( current > x){
            cout << "NO";
            check=false;
        }
        else if ( current == x){
            cout << "YES";
            check = false;
        }
    }
}

