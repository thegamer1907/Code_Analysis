#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb(x) push_back(x)
#define mod 1000000007
int main()
{
	ios_base::sync_with_stdio(false);
	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h=h+(m*60+s)/3600;
	m=m/5;
	m=m+s/300;
	s=s/5;
	ll ans=0;
	vector <double> arr;
	arr.pb(h);
	arr.pb(s);
	arr.pb(m);
	sort(arr.begin(),arr.end());
	//cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<t1<<" "<<t2<<endl;
	if(((t1>=arr[0]&&t2>=arr[0])&&(t1<=arr[1]&&t2<=arr[1])))
	{
		ans=1;
		//cout<<0;
	}
	else if(((t1>=arr[1]&&t2>=arr[1])&&(t1<=arr[2]&&t2<=arr[2])))
	{
		ans=1;
		//cout<<1;
	}
	else if(((t1>=arr[2]&&t2>=arr[2])&&(t1<=12.0&&t2<=12.0))||((t1>=0.0&&t2>=0.0)&&(t1<=arr[0]&&t2<=arr[0])))
	{
		ans=1;
		//cout<<2;
	}
	else if(((t1>=arr[2]&&t1<=12.0)&&(t2>=0.0&&t2<=arr[0]))||((t2>=arr[2]&&t2<=12.0)&&(t1>=0.0&&t1<=arr[0])))
	ans=1;
	if(ans==1)
	cout<<"YES";
	else
	cout<<"NO";
}
	