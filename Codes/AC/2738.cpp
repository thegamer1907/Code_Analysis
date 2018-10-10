#include <bits/stdc++.h>
using namespace std;
 
#define M 1000000007
 
#define mp make_pair
#define pb push_back
#define tri pair<int, pair<int, int> >
#define TRI(a,b,c) (make_pair(a,make_pair(b,c)))
 
typedef long long ll;
typedef long double ld;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s; cin>>s;
    int n = s.size();
    int l=0, r=0, k, z[n], mx=0;
    set<int> st;
    for(int i=1; i<n; i++)
    {
    	if(i>r)
    	{
    		l=r=i;
    		while(r<n && s[r]==s[r-l])r++;
    		z[i]=r-l;
    		r--;
    	}
    	else
    	{
    		k = i-l;
    		if(z[k]<(r-i+1))
    		{
    			z[i]=z[k];
    		}
    		else
    		{
    			l=i;
    			while(r<n && s[r]==s[r-l])r++;
	    		z[i]=r-l;
	    		r--;
    		}
    	}
    	if(i+z[i]==n && z[i]<=mx)
    	{
    		cout<<s.substr(0,z[i]);
    		return 0;
    	}
    	mx=max(mx, z[i]);
    }
    cout<<"Just a legend";
    return 0;
}