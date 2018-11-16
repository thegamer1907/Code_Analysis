//493B
#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
int main()
{
	int a[100];
	int n,B,i;
	int val;
	int nodd=0,neven=0;
	int sum=0,num=0;
	priority_queue<int> bc;
	cin>>n>>B;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		if(a[i]%2==1)
		{   //cout<<"abc";
			nodd+=1;
		}
		else
		{
			neven+=1;
			//cout<<"ab";
		}
		//cout<<nodd<<' '<<neven<<endl;
		if(nodd==neven)
		{	//cout<<"Hi";
		    val=abs(a[i]-a[i+1]);
			bc.push(val);
			sum+=val;
			num+=1;
		}
	}
	while(sum>B)
	{
		sum=sum-bc.top();
		bc.pop();
		num-=1;
	}
	cout<<num;
	return 0;
}	