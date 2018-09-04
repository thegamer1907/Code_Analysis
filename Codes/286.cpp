#include <iostream>
#include <algorithm>
using namespace std;
int ans;
void bs(pair <int,int> a[],int x,int b,int e)
{
    int m=(e+b)/2;
    if(a[m].first<=x && a[m].second>=x){ans=m; return;}
    if(x>=a[m].second)bs(a,x,m,e);
    else bs(a,x,b,m);
}
int main(){
int n,m,x,y=0;
cin>>n;
pair <int,int> a[n];
for(int i=0;i<n;i++)
{
    cin>>x;
    a[i].first=y+1;
    y+=x;
    a[i].second=y;
}
cin>>m;
for(int i=0;i<m;i++)
{
    cin>>x;
    bs(a,x,0,n);
    cout<<1+ans<<endl;
}
        return 0;
}
