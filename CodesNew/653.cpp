#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int n,m,common=0;
	string x;
	cin>>n>>m;
	set <string> myset;
	for(int i=0;i<m+n;i++)
	{
		cin>>x;
		if(myset.count(x)==0)
		myset.insert(x);
		else
            common++;
	}
	if(n-(common/2)>m-((common+1)/2))
        cout<<"YES";
	else
	    cout<<"NO";

   return 0;

}
