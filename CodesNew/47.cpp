#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ar[1005],k;
    int i,j,n,d;
    double d1=0,temp,ans;

    cin >> n >> k;

    for(i=0;i<n;i++) cin >> ar[i];

    sort(ar,ar+n);

    d = max((ar[0]-0),(k-ar[n-1]));
    for(i=0;i<n-1;i++){
        temp =(double)ar[i+1]-(double)ar[i];
        if(temp>d1){
            d1=temp;
        }

    }
    d1= d1/2.0;
    d = double(d);
    if(d1>d){
        ans=d1;
    }
    else{
        ans = d;

    }

   printf("%.10lf\n", ans);


    return 0;
}
