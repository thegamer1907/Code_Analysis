#include<bits/stdc++.h>
#include<algorithm>
#define ll long long int
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL) 
#define input(arr,n) for(ll i=0;i<n;i++ )cin>>arr[i]
#define range(i,a,b) for(ll i=a;i<=b;i++)
#include<string>
#define set(arr,n) memset(arr,n,sizeof(arr))
#define pb(v,a) v.push_back(a)
using namespace std;
int main()
{
	string s;
	cin>>s;
	ll len=s.length();--len;
	int flag=0;
	while(len>=0)
	{
		char ch=s[len];
		ll count =0;
		while(s[len]==ch&&len>=0)
		{
			len--;
			count++;
			if(count==7)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)cout<<"YES";
	else cout<<"NO";
}