#include<bits/stdc++.h>
using namespace std;
int n,t;
string s,a;
int main(){
    cin >>n>>t;
    cin >>s;
    for (int i = 0 ; i < t ; i++){
        a = "" ;
        for (int i2 = 0 ; i2 < n-1 ; i2++){
            if (s[i2] == 'B' and s[i2+1] == 'G'){
                a += "GB" ;
                i2++;
            }
            else{
                a += s[i2] ;
            }
        }

        if (s[n-2] != 'B' or s[n-1] != 'G'){
            a += s[n-1] ;
        }
        s = a ;
    }
    cout << a ;

}