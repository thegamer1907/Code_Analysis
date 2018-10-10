#include <bits/stdc++.h>

using namespace std;
long double ar[1010];
 int main()
 {

     long double a,b,c,n,m,l,k,j,hi,lo,mid;
     long i;

     cin>>n>>l;
     for(i=0;i<n;i++)
     {
         cin>>ar[i];
     }
     sort(ar,ar+i);
     mid=ar[0]-0;
     for(i=1;i<n;i++)
     {
         if(mid<(ar[i]-ar[i-1])/2)
            mid=(ar[i]-ar[i-1])/2;
     }
     if(mid<l-ar[i-1])
        mid=l-ar[i-1];


    b=(double)mid/2;
    //cout<<mid<<endl;
    printf("%Lf",mid);


     return 0;
 }
