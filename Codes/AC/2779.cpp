#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
#define MAXN (ll)(1e6+100)

int lps[MAXN];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string s;
	cin >> s;

	int j=0;
	for(int i=1;s[i];i++)
	{
		while(s[j]!=s[i] && j!=0) j=lps[j-1];
		if(s[j]==s[i]) lps[i]=j+1, j++;
//		cout << lps[i] << " ";
	}
//	cout << endl;
	int n=s.size();
	int midx=-1, ma=0;
	for(int i=1;s[i];i++)
		if(lps[i]==lps[n-1] && i!=n-1) 
			if(ma<lps[i]) ma=lps[i], midx=i;
	
	if(midx==-1)
		if(lps[lps[n-1]-1]!=0) ma=lps[lps[n-1]-1], midx=lps[lps[n-1]-1]-1;
//	cout << ma << " " << midx << " " << endl;
	if(midx!=-1) 
	{
		for(int i=0;i<ma;i++)
			cout << s[midx-ma+1+i]; cout << endl;
	}
	else cout << "Just a legend\n";
	return 0;
}

