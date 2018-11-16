#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n, ar[105];
	cin>>n;
	int total = 0;
	for(int i=0; i<n ;i++){

		cin>>ar[i];
		if(ar[i] == 1) total++;
	}

	int ans = total;

	for(int i=0; i<n; i++){

		for(int j=i; j<n; j++){

			int one = 0, zero = 0;

			for (int k = i; k <= j; ++k)
			{
				
				if(ar[k] == 0) zero++;
				else one++;

			}

			//cout<<total-one+zero<<' '<<ans<<endl;
			ans = max(total-one+zero, ans);
			//cout<<ans<<endl;

		}
	}

	if(total == n){
		ans = total-1;
	}

	cout<<ans<<endl;	




return 0;	
}