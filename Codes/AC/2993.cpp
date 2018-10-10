#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll maxn=1e6+5,M=20,bghs=1e9+7,inf=1e9;ll F[maxn],n;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); string s; cin>>s; n=s.size();	F[0]=F[1]=0; ll k=0;
	for (ll i=1;i<n;i++)
	{
		while (k>0 && s[k]!=s[i]) k=F[k];
		if (s[k]==s[i]) k++;F[i+1]=k;
	}
	if (F[n]!=0) for (ll i=1;i<n;i++) if (F[i]==F[n]) {for (ll i=0;i<F[n];i++) cout<<s[i]; cout<<endl; return 0;}
	if (F[n]==0 || F[F[n]]==0) {cout<<"Just a legend\n"; return 0;}
	for (ll i=0;i<F[F[n]];i++) cout << s[i]; cout << endl;
}	
