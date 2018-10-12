#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
	int N;
	cin>>N;
	int M;
	cin>>M;
	long long int sum=0;
	int min1;
	int max1;
	vector<int> ith;
	for(int i=0;i<N;i++)
	{
		int temp;
		cin>>temp;
		ith.push_back(temp);
		sum=(sum+temp);
	}
	sort(ith.begin(),ith.end());
	int optimum;
	if((sum+M)%N==0)
	{
		optimum=((sum+M)/N);
	}
	else
	{
		optimum=(((sum+M)/N)+1);
	}
	//cout<<"optimum"<<optimum<<endl;
	if(ith[N-1]<=optimum)
	{
		min1=optimum;
	}
	else
	{
		min1=ith[N-1];
	}
	max1=(ith[N-1]+M);
	cout<<min1<<" ";
	cout<<max1;
}