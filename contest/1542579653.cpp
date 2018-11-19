//In the name of Allah
#include <bits/stdc++.h>
#define fs first
#define sc second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=1e5+7, INF=1e7;
const double PI = 3.141592653589793238462643383279502884197, eps=1e-6;

set<int> st;

bool check3()
{
	return st.find(3)!=st.end() || st.find(5)!=st.end() || st.find(6)!=st.end() || st.find(7)!=st.end();
}

bool check4()
{
	return st.find(7)!=st.end() || st.find(11)!=st.end() || st.find(13)!=st.end() || st.find(14)!=st.end()
			|| st.find(15)!=st.end()
			|| (st.find(3)!=st.end() && st.find(12)!=st.end())
			|| (st.find(5)!=st.end() && st.find(10)!=st.end())
			|| (st.find(6)!=st.end() && st.find(9)!=st.end());
}

int main()
{
	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int n, k, mask, x, tmask=0;

	cin >> n >> k;

	for(int i=0 ; i<n ; i++)
	{
		mask=0;
		for(int j=0 ; j<k ; j++)
		{
			cin >> x;

			if(!x)
				mask |= (1<<j);
		}

		st.insert(mask);
		tmask |= mask;
	}


	if(tmask==(1<<k)-1 && (k<3 || (k==3 && check3()) || (k==4 && check4())))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
