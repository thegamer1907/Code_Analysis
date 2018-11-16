#include<vector>
#include<iostream>
#define ve vector
using namespace std;

class solve
{
	int n;
public:
	solve()
	{
		int one=0,zer=0;
		cin >> n;
		ve<int> v(n);
		for(auto &a:v)
		{
			cin >> a;
			if(a==0)
				zer++;
			else
				one++;
		}
		if(zer ==0)
		{
			cout<<one-1<<endl;
			return;
		}
		int max = one;
		for(int i=0;i<n;i++)
			for(int j=i;j<n;j++)
			{
				int o = cnt_one(v,i,j);
				int z = j-i+1-o;
				max = max > (one-o+z) ? max : (one-o+z);
			}
		cout<<max<<endl;
	}

	int cnt_one(ve<int> v,int a, int b)
	{
		int ans=0;
		for(int i=a;i<=b;i++)
			if(v[i] == 1)
				ans++;
		return ans;
	}
};

int main()
{
	solve s;
	return 0;
}