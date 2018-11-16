#include <bits/stdc++.h>
using namespace std;
 
#define ll signed long long int
#define pb push_back
#define mp make_pair
 
#define ff first
#define ss second
 
#define t1(x)    	         cout <<#x<<": "<<x<<endl;
#define t2(x, y)             cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<< endl;
#define t3(x, y, z)          cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define t4(a, b, c, d)       cout <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl;
#define t5(a, b, c, d, e)    cout <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<<": "<<e<<endl;
#define clr(x) memset(x, 0, sizeof(x))
#define REP(i,m) for(int i=0;i<m;i++)
#define REP2(i,n,m) for(ll i=n;i<m;i++)
#define all(x) (x).begin(), (x).end()
typedef vector<int> vi;
typedef vector<ll> vll;

const int mod =1e9+7;
const int N = 1e5+5;
const int sz =1e7+4;
const int SIZE = 2 * 1e5 + 10;
#define mod 1000000007
int n,a,b;
ll powerOfTwo[100];
int binarySearch(int lo , int hi ,int x,int a,int b){
	int mid = (lo+hi)/2;
	if(a<=mid && b>mid){
		return x;
	}
	else if(a<=mid && b<=mid)
	{
		x--;
		binarySearch(lo,mid,x,a,b);
	}
	else if(a>=mid && b>=mid){
		x--;
		binarySearch(mid+1,hi,x,a,b);
	}
}
int main() {
	cin>>n>>a>>b;
	powerOfTwo[1]=0;
	int val = 1;
	for(int i =2;i<=256;i*=2){
		powerOfTwo[i] = val;
		val++;
	}
	int matches = powerOfTwo[n];
	int ans = binarySearch(1,n,matches,min(a,b),max(a,b));
	if(ans == matches)
		cout<<"Final!\n";
	else
		cout<<ans<<"\n";
}