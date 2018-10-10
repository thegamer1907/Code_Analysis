#include <bits/stdc++.h>

using namespace std;
string s;
typedef long long int ll;
const ll N=1e6+10;
ll f[N],n,k;
int main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin >> s;
	n=s.size();
	f[0]=f[1]=0;
	k=0;	
	for(int i=1; i<n; i++) 
	{
		while(k>0 && s[k]!=s[i]) k=f[k];
		if(s[k]==s[i]) k++;
		f[i+1]=k;
	}
	if(f[n]==0)
	{
		cout << "Just a legend" << endl;
		return 0;
	}
	for(int i=2; i<n; i++)
		if(f[i]==f[n])	
		{
			for(int j=0; j<f[n]; j++)
				cout << s[j];
			return 0;
		} 
	k=f[n];
	k=f[k];
	if(k==0)
        {
                cout << "Just a legend" << endl;
                return 0;
        }
	for(int j=0; j<k; j++)
        	cout << s[j];
	return 0;

}
