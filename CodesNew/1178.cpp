#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(long long i=a;i<=b;i++)
#define rf(i,a,b) for(long long i=a;i>=b;i--)
#define endl '\n'
#define spc " "
#define INF 2000000000
#define LINF 2000000000000000000    
#define MOD 1000000007
#define ll long long
#define vi vector <int>
#define vvi vector < vector <int> >
#define vll vector <long long>
#define pb push_back

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc; tc=1; while(tc--)
    {
    	ll n; cin>>n; ll a[n]; f(i,0,n-1) cin>>a[i];
    	ll mini=INF; f(i,0,n-1) if(a[i]<mini) mini=a[i];
    	if(mini>=n)	f(i,0,n-1) a[i]-=(mini/n)*n;
    	ll index=-1,reducer=0;
    	while(index==-1)
    	{
    		f(i,0,n-1)
    		{
    			a[i]-=reducer;
    			if(a[i]<=0)
    			{
    				index=i;
    				break;
    			}
    			reducer++;
    		}
    	}
    	cout<<index+1<<endl;
    }
	return 0;
} 