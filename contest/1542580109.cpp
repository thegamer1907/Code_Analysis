#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n>>k;
	int a[k+1][n+1];
	bool pos = false;
	int count;
	for(i = 1;i<=n;i++)
	{
		for(j = 1;j<=k;j++)
		{
			cin>>a[j][i];
		}
	}
	if(k == 1)
	{
		for(i = 1;i<=n;i++)
		{
			if(a[1][i] == 0)
			{
				pos = true;
				break;
			}
		}
	}
	else if(k == 2)
	{
		bool b1 = false,b2 = false;
		for(i = 1;i<=n;i++)
		{
			if(a[1][i] == 0&&a[2][i] == 0)
			{
				pos = true;
			}
			if(a[1][i] == 0)
			{
				b1 = true;
			}
			if(a[2][i] == 0)
			{
				b2 = true;
			}
		}
		if(pos||(b1&&b2))
		{
			pos = true;
		}
	}
	else if(k == 3)
	{
		bool r1 = false,r2 = false,r3 = false;
		for(i = 1;i<=n;i++)
		{
			if(a[1][i] == 0)
			{
				r1 = true;
			}
			if(a[2][i] == 0)
			{
				r2 = true;
			}
			if(a[3][i] == 0)
			{
				r3 = true;
			}
		}
		if(r1&&r2&&r3)
		{
			for(i = 1;i<=n;i++)
			{
				count = 0;
				for(j = 1;j<=3;j++)
				{
					count += a[j][i];
				}
				if(count<2)
				{
					pos = true;
					break;
				}
			}
		}
	}
	else
	{
		bool r1 = false,r2 = false,r3 = false,r4 = false;
		for(i = 1;i<=n;i++)
		{
			if(a[1][i] == 0)
			{
				r1 = true;
			}
			if(a[2][i] == 0)
			{
				r2 = true;
			}
			if(a[3][i] == 0)
			{
				r3 = true;
			}
			if(a[4][i] == 0)
			{
				r4 = true;
			}
		}
		if(r1&&r2&&r3&&r4)
		{
			for(i = 1;i<=n;i++)
			{
				count = 0;
				for(j = 1;j<=4;j++)
				{
					count += a[j][i];
				}
				if(count<=1)
				{
					pos = true;
					break;
				}
			}
			if(pos == false)
			{
				bool v12 = false,v13 = false,v14 = false,v23 = false,v24 = false,v34 = false;
				for(i = 1;i<=n;i++)
				{
					if(a[1][i] == 0)
					{
						if(a[2][i] == 0)
						{
							v12 = true;
						}
						if(a[3][i] == 0)
						{
							v13 = true;
						}
						if(a[4][i] == 0)
						{
							v14 = true;
						}
					}
					if(a[2][i] == 0)
					{
						if(a[3][i] == 0)
						{
							v23 = true;
						}
						if(a[4][i] == 0)
						{
							v24 = true;
						}
					}
					if(a[3][i] == 0&&a[4][i] == 0)
					{
						v34 = true;
					}
				}
				if((v12&&v34)||(v13&&v24)||(v14&&v23))
				{
					pos = true;
				}
			}
		}
	}
	if(pos)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}