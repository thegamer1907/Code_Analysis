#include <bits/stdc++.h>
#define loop(i,a,b) for(ll i=a;i<=b;i++)
#define mod 1000000007
#define  F first
#define  S second
#define mp make_pair
#define pb push_back
#define fast_io std::ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
typedef long long int  ll;
using namespace std;

int main(){
	fast_io;
	string a,b;
	int n;
	cin>>a;
	cin>>n;
	bool find1=false;
	bool find2=false;
	bool find3=false;
	bool find4=false;
	for (int i = 0; i < n; ++i)
	{
		cin>>b;
		if(a[0]==b[1])
			find1=true;
		if(a[1]==b[0])
			find2=true;

		if(a[1]==b[0] && a[0]==b[1])
			find3=true;

		if(a[1]==b[1] && b[0]==a[0])
			find4=true;
	}
	//cout<<find1<<" "<<find2<<" "<<find3<<" "<<find4<<endl;
	if(find1&&find2 || find3 || find4)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}