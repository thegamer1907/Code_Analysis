#include <bits/stdc++.h>
using namespace std;
	
#define fastIO ios::sync_with_stdio(false);	cin.tie(NULL); cout.tie(NULL);
#define asc(s) sort(s.begin(),s.end())
#define des(s) sort(s.rbegin(),s.rend())
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define rev(v) reverse(v.begin(), v.end())
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define precision(x,p) fixed<<setprecision(p)<<x
#define mod 1000000007
#define PI 3.14159265
typedef long long ll;
	
vector<string> split(string s)
{
	istringstream buf(s);
	istream_iterator<string>beg(buf), end;
	
	vector<string>list(beg, end);
	return list;
}

void solve()
{
    int n,ans;
    cin>>n;
    ans = n;

    vector <int> v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];

    asc(v);

//    for(int i=0;i<n;i++)
//    cout<<v[i]<<' ';

    int mid_key = v[n-1]/2;
    int mid = upper_bound(v.begin(), v.end(), mid_key)-v.begin()-1 ;
    
    int stop = min(mid,n/2-1), j=n-1, i=stop;
    
    
    
    while(i>=0 && j>stop)
    {
        
        if(v[j]-v[i]>=v[i])
        {
            j--;
            ans--;
        }
        i--;
    }   

    cout<<ans;
}
 
 
 
 
int main()
{
	fastIO
	
	int t=1;
	//cin>>t;
	
	for(int test_case=1;test_case<=t;test_case++)
		solve();
	
	return 0;
} 