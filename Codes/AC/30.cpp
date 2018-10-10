#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{cout<<fixed;
setprecision(12);
    int n,l,m=-1,k;
    double b;
    cin>>n>>l;
    vector <int> a(n);
    for (int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());

    m=2*a[0];
    for (int i=1;i<n;i++){
      k=a[i]-a[i-1];
       if(k>m)
            m=k;
            //cout<<m<<" ";
    }
    //cout<<endl;
    //cout<<m<<" ";
    //cout<<a[n-1]<<endl;
    if ((l-a[n-1])*2>m) m=(l-a[n-1])*2;
    //cout<<m<<endl;
        //for (int i=1;i<n;i++) cout<<a[i]<<" ";cout<<m<<" ";
    b=(double)m/2;
    cout<<b;
    return 0;
}
