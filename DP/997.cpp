/****HVARDHANSINGH****/

#include<bits/stdc++.h>
using  namespace std;

typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;
typedef set<int> si;
typedef map<int,int> mii;

#define F   first
#define S   second
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,it) for(typeof((c).begin() it = (c).begin(); it != (c).end(); it++)
#define present(c,x) ((c).find(x) != (c).end())         //for sets, maps..etc
#define cpresent(c,x) (find(all(c),x) != (c).end())  //for vectors

#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define endl    "\n"

/*******************************GLOBAL DECLARATION***************************************/
vi v;

/****************************************************************************************/

int main()
{
	ios_base::sync_with_stdio( false );
	cin.tie(0);
	cout.tie(0);
	
	int T=1;
	//cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    int one=0,zero = 0;
	    rep(i,0,n)
	    {
	        int tmp;
	        cin>>tmp;
	        v.pb(tmp);
	        if(tmp==1)
	            one++;
	        else
	           zero++;
	    }
	    
	    int bst = 0;
	    int o=0;
	    int z=0;
	    rep(i,0,n)
	    {
	        rep(j,i,n)
	        {
	            if(v[j]==0)
	                z++;
	            else
	                o++;
	            bst= max(bst, one-o+z);
	            
	                
	        }
	        z=0;
	        o=0;
	    }
	    cout<<bst;
	}
	return 0;
}
