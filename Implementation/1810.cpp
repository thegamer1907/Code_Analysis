#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;


int main(){
    int n,x1=0,y1=0,z1=0;
    cin >> n;
    int x[n],y[n],z[n];
    for (size_t i = 0; i < n; i++) {
      cin >> x[i] >> y[i] >> z[i];
      x1+=x[i];
      y1+=y[i];
      z1+=z[i];
     // cout << z1 << " " << endl;
    }
    //int res=x1+y1+z1;
   //cout << res << endl;
    if(x1!=0 || y1!=0 || z1!=0){
      cout << "NO";
      return 0;
    }else cout << "YES";
}