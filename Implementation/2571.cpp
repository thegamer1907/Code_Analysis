#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
    int n,h,a;
    cin>>n>>h;
    ll t=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>h){t++;}
        t++;
    }
    cout<<t;
    return 0;
}
/**
1010101010101010      010101        0101010      10             1010101     10  10   10
0101          01    101   101     101    010     01            101  010     0101     01
1010    1010       101     101   101      010    10           101010101     1010     1010101
1010     10101    101       101 101        010   01          101    010     0101     01   10
10101010101010     10101010101   10101010101     101010     101     101     10  10   10   01
**/
