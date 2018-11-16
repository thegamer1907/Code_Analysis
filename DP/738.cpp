// Deep_thinker26
// Love _ Osho _ Fuck it....

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define go(i,s,n) for (int i=s;i<n;++i)
#define mod 1000000007
#define INF 1000000000
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(int argc, char const *argv[])
{
    fastio;
	string s;
	cin>>s;
	int n = s.size();
	int arr[n] ;
	for(int i = 1 ;i < n; i++)
	{
		if(i == 1)
		{
			if(s[i] == s[i-1]) arr[i] = 1;
			else arr[i] = 0;
		}
		else
		{
			if(s[i] == s[i-1]) arr[i] = 1 + arr[i-1];
			else arr[i] = arr[i-1];
		}
	}    
	int q; cin>>q;
	while(q)
	{
		int l,r; cin>>l>>r;
		if(l == 1)
		{
			cout<<arr[r-1]<<endl;
		}
		else
		{
			cout<<arr[r-1] - arr[l-1]<<endl;
		}


		q--;
	}
    return 0;
}
