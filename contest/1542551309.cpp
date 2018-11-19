//868C
#include <iostream>
#include <set>
#include <string>

using namespace std;

int n,k,i,j,a[4],p;
set< string > st;
bool ans = false;

void make(set< string >::iterator it)
{
	++p;
	for (i=0;i<k;++i)
	{
		a[i] += (*it)[i] - '0';
	}

	bool ok = true;
	for (i=0;i<k;++i)
	{
		if (a[i]*2 < p)
		{
			ok = false;
			i = k;
		}
	}

	if (ok)
	{
		ans = true;
	}

	
	for (set< string >::iterator it2 = next(it,1); it2!=st.end() && !ans; ++it2)
	{
		make(it2);
	}

	--p;
	for (i=0;i<k;++i)
	{
		a[i] -= (*it)[i] - '0';
	}
}


int main()
{
	cin >> n >> k;

	for (i=0;i<n;++i)
	{
		string s;

		for (j=0;j<k;++j)
		{
			cin >> p;
			if (p == 0)
				s += '1';
			else
				s += '0';
		}

		st.insert(s);
	}

	p=0;
	for (set< string >::iterator it = st.begin(); it!=st.end() && !ans; ++it)
	{
		p = 0;
		make(it);
	}

	if (ans)
		cout << "Yes";
	else
		cout << "No";

	getchar();getchar();
	return 0;
}