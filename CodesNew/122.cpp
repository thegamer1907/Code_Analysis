#include <bits/stdc++.h>
using namespace std;
bool mark[1000];
typedef long long ll;
int main(){
    ll  n,i,l;
    double rad=0,m;
    cin>>n>>l;

    ll lamp[n+10];

    for(i=0; i<n; i++){
        scanf("%lld",&lamp[i]);
    }

    sort(lamp,lamp+n);
    //for(i=0;i<n;i++) cout<<lamp[i]<<" ";
    //cout<<endl;

    rad=max(lamp[0]-0,l-lamp[n-1]);

    //if(n==2&&lamp[0]==0&&lamp[1]==l) rad=l;
    //cout<<rad<<endl;
    i=0;
    if(lamp[0]==0) i=1;


    for(;i<n;i++){
        m=(lamp[i]-lamp[i-1]);
        m=m/2;
        rad=max(rad,m);
        //cout<<m<<"  "<<rad<<endl;
    }

    printf("%.12lf\n",rad);




}
