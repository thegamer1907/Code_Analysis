#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,koko=-1,sum=0;
	std::cin>>n>>m;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		if(v[i]>koko)
			koko=v[i];
		sum+=v[i];
	}

	int total=koko*n;
	int rem =total-sum;
	int rema=sum+m-total;

	if(rema <= 0)
		cout<<koko<<" "<<koko+m<<endl;
	else
	{
		int tt=koko;
		while(rema>0)
		{
			koko++;
			rema=rema-n;
		}
		cout<<koko<<" "<<tt+m<<endl;
	}


	




	return 0;
}
