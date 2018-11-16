#include<bits/stdc++.h>
#define ll          long long int
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define Max(a,b)    ((a)>(b)?(a):(b))
#define Min(a,b)    ((a)<(b)?(a):(b))
#define rep(i,a,b)  for (__typeof(b) i=(a)-((a)>(b));i!=(b)-((a)>(b));i+=1-2*((a)>(b)))
#define all(a)      a.begin(),a.end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define endl        '\n'
#define debug(a)    cout<<#a<<": ";for(auto i:a)cerr<<i<<" ";cerr<<'\n';

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--)
	{
	    int i,j,k,m,n,c=0;
	    cin>>n;
	    vi a;
		rep(i,0,n)
		{
		    cin>>k;
		    a.push_back(k);
		}
		cin>>m;
		vi b;
        rep(i,0,m)
        {
		    cin>>k;
		    b.push_back(k);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
        rep(i,0,a.size())
        {
            rep(j,0,b.size())
            {
                if(abs(a[i]-b[j])<=1)
                {
                    c++;
                    a.erase(a.begin()+i);
                    b.erase(b.begin()+j);
                    i--;
                    j--;
                }
                            
            }
            
        }
        
        cout<<c;
	}
	return 0;
}