#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int n,x,y,maX,i,l;
    double res,res1=0,res2=0,res3,div;
    cin>>n>>l;
    int a[n+10];
    for( i=0; i<n; i++){
        cin>>a[i];

    }
    sort(a,a+n);
    if(n==1){
        res1 = abs(0-a[0]);
        res2 = abs(l-a[n-1]);
        res3 = max(res1,res2);
        printf("%.10lf\n",res3);
        return 0;
    }
        res1 = abs(0-a[0]);
        res2 = abs(l-a[n-1]);
        res3 = max(res1,res2);
       // cout<<res3<<endl;

    maX = 0;

    for( i=0; i<n-1; i++){
        if(a[i+1]-a[i]>=maX){
            maX = a[i+1]-a[i];
            x=a[i];
            y=a[i+1];

        }
    }
   // cout<<x<<" "<<y<<endl;
    res = 1.0*(y-x)/2;

    if(res3>res)
        printf("%.10lf\n",res3);
    else
         printf("%.10lf\n",res);
    return 0;
}
