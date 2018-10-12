#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,q; cin >> n >>q;
vector<int> st(n);
long long int totstr=0;
for(int i=0; i<n; i++)
{
	cin >> st[i] ;
	totstr+= st[i];
}
vector<long long int> arr(q);
for(int i=0;i<q; i++)
cin >> arr[i];
vector<long long int> cum(n);
cum[0] = st[n-1];
for( int i=n-2; i>=0; i-- )
{
	cum[n-i-1] = cum[n-i-2] + st[i];
}
long long int temp = totstr;
for( long long int i=0; i<q; i++ )
{
		totstr-=arr[i];
		if(totstr <= 0  )
		{
			cout << n << endl;
			totstr = temp;
		}
		else
		{
			auto it = lower_bound( cum.begin(), cum.end(), totstr);
			cout << it - cum.begin() + 1 << endl;
		}
}


return 0;
}
