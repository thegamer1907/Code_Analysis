#include<bits/stdc++.h>
#define eps 0.000000000001
#define F first
#define S second
using namespace std;
char s[1000][2];
int main()
{
    //cin.tie(0);ios_base::sync_with_stdio(false);
    pair<double,int> a[5];
    for(int i=0;i<5;i++)a[i].S=i;
    cin>>a[0].F>>a[1].F>>a[2].F>>a[3].F>>a[4].F;
    a[0].F/=12.0;a[1].F/=60.0;a[2].F/=60.0;
    a[3].F/=12.0;a[4].F/=12.0;
    a[0].F+=eps;a[1].F+=eps;
    sort(a,a+5);
    int g=0,h=0;
    for(int i=0;i<5;i++)
    {
        if(a[i].S==3)g=i;
        if(a[i].S==4)h=i;
    }
    if(g<h)swap(g,h);
    if(g==h+1||(g==4&&h==0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;
}