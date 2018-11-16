#include<bits/stdc++.h>
#define lli  long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const int mod=1e9+7;
int main()
{
lli k,n,w,res;
cin>>k>>n>>w;
	res=k*((w*(w+1))/2);
	if(res>n)
	cout<<res-n<<endl;
	else
	cout<<0;
	

}
