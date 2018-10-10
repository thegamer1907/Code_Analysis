//Amey Patel
#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define test(t) int t;cin>>t;while(t--)typedef int MyCustomType;
#define arr(a,n) int a[n];for(int i=0;i<n;i++)cin>>a[i];
#define bs int binarySearch(int low,int high,int key){while(low<=high){int mid=(low+high)/2;if(a[mid]<key) low=mid+1;else if(a[mid]>key) high=mid-1;else return mid;}return -1;}
#define N 100005
#define endl '\n'
#define trace1(x)                cout<<x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define loop for(int i=0;i<n;i++)
#define int long long int
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int32_t  main()
{
	map<int,int>m;
	int n;cin>>n;
	int a[n];
	rep(i,n)cin>>a[i];
	int t;cin>>t;	
	int p=1;
	rep(i,n)
	{
		int b=a[i];
		while(b--)
		{
			m[p]=i+1;
			p++;
		}
	}
	while(t--)
	{
		int a;cin>>a;cout<<m[a]<<endl;
	}
}
