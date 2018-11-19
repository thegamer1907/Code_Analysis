#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	vector<string> vec;
	cin>>n>>k;
	int a,b,c,d;
	
	for(int i=0;i<n;i++)
	{
		int cnt=0;
		char arr[5];
		for(int j=0;j<k;j++)
		{
			scanf("%d",&a);
			if(a==1)
				cnt=1;
			arr[j]=a+'0';
		}
		arr[k]='\0';
		string ss(arr);
		vec.push_back(ss);
		if(cnt==0)
		{
			printf("YES\n");
			return 0;
		}
	}
	
	sort(vec.begin(),vec.end());
	
//	for(int i=0;i<vec.size();i++)
//	{
//		cout<<vec[i]<<endl;
//	}
	
	int arr[5][5]={0};
	for(int xx=0;xx<vec.size();xx++)
	{
		
		for(int ii=0;ii<k&&xx==0;ii++)
		{
			if(vec[xx][ii]=='1')
				arr[0][ii]=1;
		}
		
		int ccc=0,c2=0;
		for(int ii=0;ii<k&&xx>0;ii++)
		{
			if(arr[0][ii]==1&&vec[xx][ii]=='1')
				ccc++;
				if(xx==1&&vec[xx][ii]=='1')
					arr[1][ii]=1;
				if(xx>1&&arr[1][ii]==1&&vec[xx][ii]=='1')
					c2++;
		}
		
		if((ccc==0&&xx>0)||(c2==0&&xx>1))
		{
			printf("YES\n");
			return 0;
		}
	}
	
	printf("NO\n");
	return 0;
}