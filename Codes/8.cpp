#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double  b,c,d,p;
int a;
    cin>>a>>b;
  double ans=0;
  double m[a+2];
  m[0]=0;
  for (int i=1;i<=a;i++) cin>>m[i];
    sort(m,m+a+1);
    m[a+1]=b;
    for (int i=1;i<a;i++) if ((m[i+1]-m[i])/2>ans) ans=(m[i+1]-m[i])/2;
    if (m[1]>ans) ans=m[1];
    if (m[a+1]-m[a]>ans) ans=m[a+1]-m[a];
    cout<<fixed<<setprecision(10)<<ans;
    return 0;
}