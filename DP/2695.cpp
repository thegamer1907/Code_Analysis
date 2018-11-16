#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> x(n);
    vector <int> h(n);
    int k=2;
    if (n==1){
     cout<<1;
     return 0;
    }
    for (int i=0; i<n; i++){
     cin>>x[i]>>h[i];
    }
    for (int i=1; i<n-1; i++){
     if (x[i]-h[i]>x[i-1]) k++;
     else if (x[i]+h[i]<x[i+1]) {
      x[i]+=h[i];
      k++;
     }
    }
    cout<<k;
    return 0;
}
