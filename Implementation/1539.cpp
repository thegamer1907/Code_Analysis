#include<bits/stdc++.h>
#include<cstdio>
typedef long long unsigned llu;

using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	int ar[2]={0, 0};
	char x;
	bool flag=0;

	while(cin>>x)
	{
		//cout<<x<<endl;
		if(x=='0')
		{
			ar[0]++;
			//cout<<ar[0];
			ar[1]=0;
			if(ar[0]>=7) flag=1;
		}

		if(x=='1')
		{
			//cout<<"*";
			ar[1]++;
			ar[0]=0;
			if(ar[1]>=7) flag=1;
		}


	}

	if(flag==1) cout<<"YES";
	else cout<<"NO";

	//fclose(stdin);
	//fclose(stdout);

	return 0;
}
