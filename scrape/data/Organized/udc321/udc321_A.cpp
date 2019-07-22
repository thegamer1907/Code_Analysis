#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<queue>
#include<set>
#include<map>
#define ll long long
#define fr(e,r,v) for(int e=r;e<v;e++)
#define bc(e,g,r) for(int e=r;e>g;e--)
#define all(b) b.begin(),b.end()
#define tr(ctn,it) for(typeof(ctn.begin()) it=ctn.begin(); it!=ctn.end();it++) 
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
ll n,m,k;
cin>>n>>m>>k;
ll a[m];
fr(i,0,m){cin>>a[i];}
ll p=0,q=0,str=0,isg=0;
fr(i,0,m)
{
	while(i<m && a[i]-p<k+1)
		{i++;str++;}
p+=str;
if(str>0){i--;q++;str=0;continue;}

if(i<m && a[i]-p>k)
	{p+=((a[i]-p-1)/k)*k;i--;}
}
cout<<q<<endl;
}