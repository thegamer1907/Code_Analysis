#include<bits/stdc++.h>
using namespace std;

int main()
{

int i,j,n,m,x,y,z,tc,xx=0,yy=0,zz=0;
cin >> tc;

while(tc--){
        cin >> x >> y >> z;

    xx+=x;
    yy+=y;
    zz+=z;
}

if(xx || yy || zz)
    cout << "NO" << endl;
else
      cout << "YES" << endl;

    return 0;
}



