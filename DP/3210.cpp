#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,greater<int> >q;
int a[110],b,n;
int tota,totb;
int nowa,nowb;
int main()
{
	cin>>n>>b;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]&1)tota++;
		else totb++;
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]&1)nowa++;
		else nowb++;
		if(nowa==nowb&&tota-nowa==totb-nowb)q.push(max(a[i+1]-a[i],a[i]-a[i+1]));
	}
	int ans=0;
	while(!q.empty()&&b>=q.top()){
		b-=q.top();ans++;q.pop();
	}
	cout<<ans<<"\n";
	return 0;
}
