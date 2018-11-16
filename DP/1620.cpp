#include <bits/stdc++.h>
using namespace std;
int l,r,q,w;
int main()
{
	string n ,o;
	cin>>n;
	for(int i = 0; i < n.size() - 1; i ++)
	{
		string p ;
		p+=n[i];
		p+=n[i + 1];
		if(p == "AB")
		{
			if(o == "BA")q++;
			l++;
		}
		if(p == "BA")
		{
			if(o == "AB")w++;
			r++;
		}
		o = p;
	}
	int mx = max(l,r),mn  = min(l,r);
	if(q > 0)
	{
	   mx--;
	}
	int maxi = max(mx,mn),mini  = min(mx,mn);
	if(w > 0)
	{
		maxi--;
	}
	if(maxi && mini)
	{
		cout<<"YES";
	}else
	{
		cout<<"NO";
	}
}