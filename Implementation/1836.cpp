#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin>>t;
     int x, y, z, sumx = 0, sumy = 0, sumz = 0;
    while(t--){
       cin>>x>>y>>z;
       sumx += x;
       sumy += y;
       sumz += z;
       
        
    }
    if(!sumz and !sumy and !sumx)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
