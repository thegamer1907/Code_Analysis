#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<vector>
#include<map>
#include<set>
#include<cmath>
using namespace std;
long long n,l,r,mid;
bool check(long long k)
{
    long long less=0,res=n;
    for(;res>0;res-=k,less+=(res>0?res:0)/10,res-=res/10);
    return less<=n/2;
}
void solve()
{
    l=1,r=(n>>1)+1;
    while(l<r)
		mid=(l+r)>>1,check(mid)?r=mid:l=mid+1;
    cout<<l<<endl;
}
int main()
{
	cin>>n;
	solve();
}