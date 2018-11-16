#include <bits/stdc++.h>

using namespace std;

int main()

{     int n,m ,cnt=0;
             cin>> n ;
              int a[n];
       for (int i=0;i<n;i++)
        cin>>a[i];
        cin>>m ;
        int b[m];
      for (int i=0;i<m;i++)
        cin>>b[i];
        sort(a,a+n) ;
        sort(b,b+m) ;
     for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if((abs(a[i]-b[j]))<2) {
                ++cnt ;
                b[j]=-55 ;
                break ;
                }
            }
        } cout<<cnt<<endl ;

     return 0 ;
}
