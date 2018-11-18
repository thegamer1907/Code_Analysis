#include <bits/stdc++.h>
#include <math.h>
#include <iostream>
#include <string>
#include <sstream>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s ;
    int n , g =0;
    cin >>s;
    cin >>n;
    string s1[n];
    for ( int i =0 ; i < n ; i++ ){
        cin >>s1[i];
        if ( s1 [i] == s){
            g =1;
        }
    }
    int k =0 , k1=0;
    if ( g == 1) cout <<"YES"<<endl;
    else {
    for ( int i =0 ; i < n ; i++ ){
        if ( s1 [i][1] == s[0]){
            k=1;
        }
        if ( s1 [i][0] == s[1]){
            k1=1;
        }

    }
        if ( k1 ==1 && k ==1 )cout <<"YES"<<endl;
        else cout <<"NO"<<endl;
    }


    return 0;
}
