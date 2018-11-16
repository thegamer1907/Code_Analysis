#include<bits/stdc++.h>
using namespace std;
class cord{
	public:
		int x;
		int y;
		int z;
	};
int main()
{
	int n,sx=0,sy=0,sz=0;
	cin>>n;
	
	cord c;
	
	
	//vector<int> s;
	for(int i=0;i<n;i++)
	{
		cin>>c.x>>c.y>>c.z;
		sx+=c.x;
		sy+=c.y;
		sz+=c.z;
	//	s.push_back(pow(c.x,2)+pow(c.y,2)+pow(c.z,2));
	}
//	for(int i=0;i<n;i++)
//		m+=s[i];
//	for(int i=0;i<n;i++)
//	{
//		if((m-s[i])==s[i])
//			v++;
//	}
//		for(int i=0;i<n;i++)
//		cout<<s[i]<<" ";
//		cout<<m<<endl;
	if(sx==0 && sy==0 && sz==0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
