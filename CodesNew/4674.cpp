
#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
using namespace std;
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
typedef long long int ll;
int main()
{
	io;
	int n,x; std::vector<int> v,w,z; cin>>n;
	for (int i = 0; i < n; ++i)
	{
		/* code */ cin>>x;v.push_back(x);
	}
	sort(v.begin(),v.end()); int c=0;
for(int i=0, j=n/2;i<n/2 &&j<n;j++)
{
	if(v[j]>=2*v[i]) c++, i++;
}
cout<<n-c;
return 0;
}	
	