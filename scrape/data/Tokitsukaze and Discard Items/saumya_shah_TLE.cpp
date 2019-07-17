#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,k,c=0;
	cin>>n>>m>>k;
	queue<long long int> q;
	long long int l=1,h=k;
	
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
			l=h+1;
			h=h+k;
			continue;
		}
		h=h+b;
		c++;
	 }
	 cout<<c;
	return 0;
}