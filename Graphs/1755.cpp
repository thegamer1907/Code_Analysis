#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
int main() {
	fastio();
	ll n,m,cnt=1,flag=0;
	cin>>n>>m;
	ll ar[n];
	for(int i=1;i<=n;i++)
	cin>>ar[i];
	if(n==1)
	cout<<"YES";
	else
	{
		while(1)
	{
	  	cnt=cnt+ar[cnt];
	  	if(m==cnt)
	  	{
	  		flag=1;
	  		break;
	  	}
	  	if(cnt>m)
	  	break;
	}
	if(flag==1)
	cout<<"YES";
        else
        cout<<"NO";
	}
	
	return 0;
}