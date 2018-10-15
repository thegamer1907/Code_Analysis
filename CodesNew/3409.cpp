#include<iostream>
#include<algorithm>
using namespace std;
int n,a[1003],m,sum;
int main()
{
    //freopen("class.in","r",stdin);
    //freopen("class.out","w",stdout);
	cin>>n>>m;
    sum=m;
    for(int i=1;i<=n;i++) cin>>a[i],sum+=a[i];
    int f=sum/n;
    if(sum%n!=0) f++;
    if(f<a[n]) f=a[n];
    sort(a+1,a+n+1);
    if(f<a[n]) f=a[n];
    cout<<f<<" "<<a[n]+m;
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}