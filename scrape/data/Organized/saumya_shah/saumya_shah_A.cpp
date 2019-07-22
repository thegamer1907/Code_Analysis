#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,k,c=0;
	cin>>n>>m>>k;
	queue<long long int> q;
	long long int h=k;
	
	for(int i=0;i<m;i++)
	{
		long long int f;
		cin>>f;
		q.push(f);
	} 
	 while(q.empty()!=true)
	 {
		long long int b=0;
		while(q.front()<=h && q.empty()!=true) 
		{
			//if(q.front()==l) l++;
			q.pop();
			b++;
		}
		if(b==0)
		{
			long long int j=q.front();
			long long int y=(j-h)/k;
			//l=h+1;
			if((j-h)%k==0) h=h+y*k;
			else
			h=h+(y+1)*k;
			//l=h-k+1;
			continue;
		}
		h=h+b;
		c++;
	 }
	 cout<<c;
	return 0;
}