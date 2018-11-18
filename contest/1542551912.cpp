#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h,m,s,t1,t2,c=0;
	cin>>h>>m>>s>>t1>>t2;
	int i=min(t1,t2);
	int j=max(t1,t2);
	if(s>5*i&&s<5*j) c++;
	if(m>=5*i&&m<5*j) c++;
	if(h>=i&&h<j) c++;
	if(c>0&&c<3) cout<<"NO";
	else cout<<"YES";
	return 0;
}