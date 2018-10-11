#include <iostream>
#include <set>
using namespace std;
string st;
int i,n,m,sxvaoba;
set <string> s;
main()
{
	cin>>n>>m;
	for(i=0;i<n+m;i++)
	{
		cin>>st;
		s.insert(st);
	}
	sxvaoba=n+m-s.size();
	if(sxvaoba%2==1) n++;
	if(n>m) cout<<"YES";else cout<<"NO";
}