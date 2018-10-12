#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const int size=1e5+50;
int arr[size];
bool test_num(int a,int n,int t)
{
	for(int i=0;i<=(n-a);i++)
	{
		if((arr[i+a]-arr[i])<=t)return true;
	}
	return false;
}
int main(int argc, char** argv) {
	int t=0,l=0,h=0,mid=0,n=0;
	cin>>n>>t;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}
	h=n;
	while(l<h)
	{
		mid=l+(h-l+1)/2;
		if(test_num(mid,n,t))l=mid;
		else h=mid-1;
	}
	cout<<l;
	return 0;
}